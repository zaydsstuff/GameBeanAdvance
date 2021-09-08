module hw.gba;

import hw.memory;
import hw.ppu;
import hw.cpu;
import hw.apu;
import hw.dma;
import hw.timers;
import hw.interrupts;
import hw.keyinput;

import scheduler;
import util;

import std.math;
import std.stdio;

enum CART_SIZE = 0x1000000;

enum ROM_ENTRY_POINT = 0x000;
enum GAME_TITLE_OFFSET = 0x0A0;
enum GAME_TITLE_SIZE = 12;

enum GBAKey {
    A      = 0,
    B      = 1,
    SELECT = 2,
    START  = 3,
    RIGHT  = 4,
    LEFT   = 5,
    UP     = 6,
    DOWN   = 7,
    R      = 8,
    L      = 9
}


// 2 ^ 64 can last for up to 3000 years
ulong num_cycles = 0;

class GBA {
public:
    ARM7TDMI         cpu;
    PPU              ppu;
    APU              apu;
    Memory           memory;
    DMAManager       dma_manager;
    TimerManager     timers;
    InterruptManager interrupt_manager;
    KeyInput         key_input;
    // DirectSound  direct_sound;

    Scheduler        scheduler;

    this(Memory memory, KeyInput key_input) {
        scheduler = new Scheduler();

        this.memory            = memory;
        this.cpu               = new ARM7TDMI(memory);
        this.interrupt_manager = new InterruptManager(&interrupt_cpu, &cpu.enable);
        this.ppu               = new PPU(memory, scheduler, &interrupt_manager.interrupt, &on_hblank);
        this.apu               = new APU(memory, scheduler, &on_fifo_empty);
        this.dma_manager       = new DMAManager(memory, scheduler, &interrupt_manager.interrupt);
        this.timers            = new TimerManager(memory, scheduler, this, &interrupt_manager.interrupt, &on_timer_overflow);
        this.key_input         = key_input;

        // this.direct_sound = new DirectSound(memory);

        MMIO mmio = new MMIO(this, ppu, apu, dma_manager, timers, interrupt_manager, key_input);
        memory.set_mmio(mmio);

        this.enabled = false;

        cpu.set_mode(cpu.MODE_SYSTEM);

        // load bios
        ubyte[] bios = get_rom_as_bytes("source/gba_bios.bin");
        cpu.memory.bios[0 .. bios.length] = bios[0 .. bios.length];
    }

    void set_internal_sample_rate(uint sample_rate) {
        apu.set_internal_sample_rate(sample_rate);
    }

    void load_rom(string rom_name) {
        ubyte[] rom = get_rom_as_bytes(rom_name);
        cpu.memory.rom[0 ..  rom.length] = rom[0 .. rom.length];

        *cpu.pc = 0x0800_0000;
        cpu.refill_pipeline();
        enabled = true; 
    }
 

 
    ulong extra_cycles = 0;
    void cycle_at_least_n_times(int n) {
        ulong times_cycled = extra_cycles;
        // writefln("Cycling at least %x times, with overflow times_cycled: %x", n, extra_cycles);
        // writefln("idle cycles: %x", idle_cycles);
        
        while (times_cycled < n) {
            Event event = scheduler.remove_schedule_item();
            // writefln("Cycling %x times", event.num_cycles);
            
            for (int i = 0; i < event.num_cycles; i++) {
                maybe_cycle_cpu();
                num_cycles++;
            }

            event.callback();
            times_cycled += event.num_cycles;
        }

        extra_cycles = times_cycled - n;
    }

    pragma(inline, true) void maybe_cycle_cpu() {
        if (idle_cycles > 0) {
            idle_cycles--;
            return;
        }

        idle_cycles += cpu.cycle();
        idle_cycles += dma_manager.check_dma();
    }

    bool interrupt_cpu() {
        return cpu.exception(CpuException.IRQ);
    }

    void on_timer_overflow(int timer_id) {
        apu.on_timer_overflow(timer_id);
    }

    void on_fifo_empty(DirectSound fifo_type) {
        dma_manager.maybe_refill_fifo(fifo_type);
    }

    void on_hblank() {
        dma_manager.on_hblank();
    }

    // is this sketchy code? it might be... but its 1 am
    // TODO: fix sketchy code
    void write_HALTCNT(ubyte data) {
        if (get_nth_bit(data, 7)) {
            // idk figure out stopping
        } else {
            // halt
            cpu.halt();
        }
    }

    bool enabled;

private:
    bool dma_cycle = false;
    uint idle_cycles = 0;
    
}