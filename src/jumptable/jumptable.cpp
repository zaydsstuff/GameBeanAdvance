#include <iostream>

#include "jumptable.h"
#include "../util.h"
#include "../memory.h"

#ifdef DEBUG_MESSAGE
    #define DEBUG_MESSAGE(message) std::cout << message << std::endl;
#else
    #define DEBUG_MESSAGE(message) do {} while(0)
#endif

extern Memory memory;

void run_00000000(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Left");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], 32 - shift));
        memory.regs[dest] = (memory.regs[source] << shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00000001(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Left");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], 32 - shift));
        memory.regs[dest] = (memory.regs[source] << shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00000010(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Left");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], 32 - shift));
        memory.regs[dest] = (memory.regs[source] << shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00000011(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Left");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], 32 - shift));
        memory.regs[dest] = (memory.regs[source] << shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00000100(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Left");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], 32 - shift));
        memory.regs[dest] = (memory.regs[source] << shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00000101(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Left");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], 32 - shift));
        memory.regs[dest] = (memory.regs[source] << shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00000110(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Left");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], 32 - shift));
        memory.regs[dest] = (memory.regs[source] << shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00000111(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Left");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], 32 - shift));
        memory.regs[dest] = (memory.regs[source] << shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00001000(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Right");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        set_flag_C(get_nth_bit(memory.regs[source], 31));
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], shift - 1));
        memory.regs[dest] = (memory.regs[source] >> shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00001001(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Right");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        set_flag_C(get_nth_bit(memory.regs[source], 31));
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], shift - 1));
        memory.regs[dest] = (memory.regs[source] >> shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00001010(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Right");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        set_flag_C(get_nth_bit(memory.regs[source], 31));
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], shift - 1));
        memory.regs[dest] = (memory.regs[source] >> shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00001011(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Right");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        set_flag_C(get_nth_bit(memory.regs[source], 31));
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], shift - 1));
        memory.regs[dest] = (memory.regs[source] >> shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00001100(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Right");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        set_flag_C(get_nth_bit(memory.regs[source], 31));
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], shift - 1));
        memory.regs[dest] = (memory.regs[source] >> shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00001101(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Right");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        set_flag_C(get_nth_bit(memory.regs[source], 31));
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], shift - 1));
        memory.regs[dest] = (memory.regs[source] >> shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00001110(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Right");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        set_flag_C(get_nth_bit(memory.regs[source], 31));
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], shift - 1));
        memory.regs[dest] = (memory.regs[source] >> shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00001111(uint16_t opcode) {
    DEBUG_MESSAGE("Logical Shift Right");

    uint8_t source = get_nth_bits(opcode, 3,  6);
    uint8_t dest   = get_nth_bits(opcode, 0,  3);
    uint8_t shift  = get_nth_bits(opcode, 6,  11);

    if (shift == 0) { // if shift == 0, the cpu shifts by 32, which is the size of the register.
        set_flag_C(get_nth_bit(memory.regs[source], 31));
        memory.regs[dest] = 0;
    } else {
        set_flag_C(get_nth_bit(memory.regs[source], shift - 1));
        memory.regs[dest] = (memory.regs[source] >> shift);
    }

    set_flag_N(get_nth_bit(memory.regs[dest], 31));
    set_flag_Z(memory.regs[dest] == 0);
}

void run_00010000(uint16_t opcode) {

}

void run_00010001(uint16_t opcode) {

}

void run_00010010(uint16_t opcode) {

}

void run_00010011(uint16_t opcode) {

}

void run_00010100(uint16_t opcode) {

}

void run_00010101(uint16_t opcode) {

}

void run_00010110(uint16_t opcode) {

}

void run_00010111(uint16_t opcode) {

}

void run_00011000(uint16_t opcode) {
    DEBUG_MESSAGE("Add #1");

    int32_t rn = memory.regs[get_nth_bits(opcode, 3, 6)];
    int32_t rm = memory.regs[get_nth_bits(opcode, 6, 9)];
    
    memory.regs[get_nth_bits(opcode, 0, 3)] = rn + rm;
    int32_t rd = memory.regs[get_nth_bits(opcode, 0, 3)];

    set_flag_N(get_nth_bit(rd, 31));
    set_flag_Z(rd == 0);
    // set_flag_C((uint64_t)rn + (uint64_t)rm > rd); // probably can be optimized

    // Signed carry formula = (A AND B) OR (~DEST AND (A XOR B)) - works for all add operations once tested
    set_flag_C((get_nth_bit(rm, 31) & get_nth_bit(rn, 31)) | 
    ((get_nth_bit(rm, 31) ^ get_nth_bit(rn, 31)) & ~(get_nth_bit(rd, 31))));


    // this is garbage, but essentially what's going on is:
    // if the two operands had matching signs but their sign differed from the result's sign,
    // then there was an overflow and we set the flag.
    bool matching_signs = get_nth_bit(rn, 31) == get_nth_bit(rm, 31);
    set_flag_V(matching_signs && (get_nth_bit(rn, 31) ^ get_flag_N()));
}

void run_00011001(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_00011010(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_00011011(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_00011100(uint16_t opcode) {

}

void run_00011101(uint16_t opcode) {

}

void run_00011110(uint16_t opcode) {

}

void run_00011111(uint16_t opcode) {

}

void run_00100000(uint16_t opcode) {
    DEBUG_MESSAGE("Move Immediate");

    uint16_t immediate_value = get_nth_bits(opcode, 0, 8);
    memory.regs[get_nth_bits(opcode, 8, 11)] = immediate_value;
    // flags
    set_flag_N(get_nth_bit(immediate_value, 31));
    set_flag_Z(immediate_value == 0);
}

void run_00100001(uint16_t opcode) {
    DEBUG_MESSAGE("Move Immediate");

    uint16_t immediate_value = get_nth_bits(opcode, 0, 8);
    memory.regs[get_nth_bits(opcode, 8, 11)] = immediate_value;
    // flags
    set_flag_N(get_nth_bit(immediate_value, 31));
    set_flag_Z(immediate_value == 0);
}

void run_00100010(uint16_t opcode) {
    DEBUG_MESSAGE("Move Immediate");

    uint16_t immediate_value = get_nth_bits(opcode, 0, 8);
    memory.regs[get_nth_bits(opcode, 8, 11)] = immediate_value;
    // flags
    set_flag_N(get_nth_bit(immediate_value, 31));
    set_flag_Z(immediate_value == 0);
}

void run_00100011(uint16_t opcode) {
    DEBUG_MESSAGE("Move Immediate");

    uint16_t immediate_value = get_nth_bits(opcode, 0, 8);
    memory.regs[get_nth_bits(opcode, 8, 11)] = immediate_value;
    // flags
    set_flag_N(get_nth_bit(immediate_value, 31));
    set_flag_Z(immediate_value == 0);
}

void run_00100100(uint16_t opcode) {
    DEBUG_MESSAGE("Move Immediate");

    uint16_t immediate_value = get_nth_bits(opcode, 0, 8);
    memory.regs[get_nth_bits(opcode, 8, 11)] = immediate_value;
    // flags
    set_flag_N(get_nth_bit(immediate_value, 31));
    set_flag_Z(immediate_value == 0);
}

void run_00100101(uint16_t opcode) {
    DEBUG_MESSAGE("Move Immediate");

    uint16_t immediate_value = get_nth_bits(opcode, 0, 8);
    memory.regs[get_nth_bits(opcode, 8, 11)] = immediate_value;
    // flags
    set_flag_N(get_nth_bit(immediate_value, 31));
    set_flag_Z(immediate_value == 0);
}

void run_00100110(uint16_t opcode) {
    DEBUG_MESSAGE("Move Immediate");

    uint16_t immediate_value = get_nth_bits(opcode, 0, 8);
    memory.regs[get_nth_bits(opcode, 8, 11)] = immediate_value;
    // flags
    set_flag_N(get_nth_bit(immediate_value, 31));
    set_flag_Z(immediate_value == 0);
}

void run_00100111(uint16_t opcode) {
    DEBUG_MESSAGE("Move Immediate");

    uint16_t immediate_value = get_nth_bits(opcode, 0, 8);
    memory.regs[get_nth_bits(opcode, 8, 11)] = immediate_value;
    // flags
    set_flag_N(get_nth_bit(immediate_value, 31));
    set_flag_Z(immediate_value == 0);
}

void run_00101000(uint16_t opcode) {

}

void run_00101001(uint16_t opcode) {

}

void run_00101010(uint16_t opcode) {

}

void run_00101011(uint16_t opcode) {

}

void run_00101100(uint16_t opcode) {

}

void run_00101101(uint16_t opcode) {

}

void run_00101110(uint16_t opcode) {

}

void run_00101111(uint16_t opcode) {

}

void run_00110000(uint16_t opcode) {
    DEBUG_MESSAGE("Add Register Immediate");

    int32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint32_t rd             = get_nth_bits(opcode, 8, 11);
    int32_t old_rd_value    = memory.regs[rd];

    memory.regs[rd] += immediate_value;
    int32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z((new_rd_value == 0));

    // Signed carry formula = (A AND B) OR (~DEST AND (A XOR B)) - works for all add operations once tested
    set_flag_C(get_nth_bit(immediate_value, 31) & get_nth_bit(old_rd_value, 31) | 
    ((get_nth_bit(immediate_value, 31) ^ get_nth_bit(old_rd_value, 31)) & ~(get_nth_bit(new_rd_value, 31))));

    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 7);
    set_flag_V(matching_signs && (get_nth_bit(old_rd_value, 31) ^ get_flag_N()));
}

void run_00110001(uint16_t opcode) {
    DEBUG_MESSAGE("Add Register Immediate");

    int32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint32_t rd             = get_nth_bits(opcode, 8, 11);
    int32_t old_rd_value    = memory.regs[rd];

    memory.regs[rd] += immediate_value;
    int32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z((new_rd_value == 0));

    // Signed carry formula = (A AND B) OR (~DEST AND (A XOR B)) - works for all add operations once tested
    set_flag_C(get_nth_bit(immediate_value, 31) & get_nth_bit(old_rd_value, 31) | 
    ((get_nth_bit(immediate_value, 31) ^ get_nth_bit(old_rd_value, 31)) & ~(get_nth_bit(new_rd_value, 31))));

    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 7);
    set_flag_V(matching_signs && (get_nth_bit(old_rd_value, 31) ^ get_flag_N()));
}

void run_00110010(uint16_t opcode) {
    DEBUG_MESSAGE("Add Register Immediate");

    int32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint32_t rd             = get_nth_bits(opcode, 8, 11);
    int32_t old_rd_value    = memory.regs[rd];

    memory.regs[rd] += immediate_value;
    int32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z((new_rd_value == 0));

    // Signed carry formula = (A AND B) OR (~DEST AND (A XOR B)) - works for all add operations once tested
    set_flag_C(get_nth_bit(immediate_value, 31) & get_nth_bit(old_rd_value, 31) | 
    ((get_nth_bit(immediate_value, 31) ^ get_nth_bit(old_rd_value, 31)) & ~(get_nth_bit(new_rd_value, 31))));

    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 7);
    set_flag_V(matching_signs && (get_nth_bit(old_rd_value, 31) ^ get_flag_N()));
}

void run_00110011(uint16_t opcode) {
    DEBUG_MESSAGE("Add Register Immediate");

    int32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint32_t rd             = get_nth_bits(opcode, 8, 11);
    int32_t old_rd_value    = memory.regs[rd];

    memory.regs[rd] += immediate_value;
    int32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z((new_rd_value == 0));

    // Signed carry formula = (A AND B) OR (~DEST AND (A XOR B)) - works for all add operations once tested
    set_flag_C(get_nth_bit(immediate_value, 31) & get_nth_bit(old_rd_value, 31) | 
    ((get_nth_bit(immediate_value, 31) ^ get_nth_bit(old_rd_value, 31)) & ~(get_nth_bit(new_rd_value, 31))));

    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 7);
    set_flag_V(matching_signs && (get_nth_bit(old_rd_value, 31) ^ get_flag_N()));
}

void run_00110100(uint16_t opcode) {
    DEBUG_MESSAGE("Add Register Immediate");

    int32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint32_t rd             = get_nth_bits(opcode, 8, 11);
    int32_t old_rd_value    = memory.regs[rd];

    memory.regs[rd] += immediate_value;
    int32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z((new_rd_value == 0));

    // Signed carry formula = (A AND B) OR (~DEST AND (A XOR B)) - works for all add operations once tested
    set_flag_C(get_nth_bit(immediate_value, 31) & get_nth_bit(old_rd_value, 31) | 
    ((get_nth_bit(immediate_value, 31) ^ get_nth_bit(old_rd_value, 31)) & ~(get_nth_bit(new_rd_value, 31))));

    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 7);
    set_flag_V(matching_signs && (get_nth_bit(old_rd_value, 31) ^ get_flag_N()));
}

void run_00110101(uint16_t opcode) {
    DEBUG_MESSAGE("Add Register Immediate");

    int32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint32_t rd             = get_nth_bits(opcode, 8, 11);
    int32_t old_rd_value    = memory.regs[rd];

    memory.regs[rd] += immediate_value;
    int32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z((new_rd_value == 0));

    // Signed carry formula = (A AND B) OR (~DEST AND (A XOR B)) - works for all add operations once tested
    set_flag_C(get_nth_bit(immediate_value, 31) & get_nth_bit(old_rd_value, 31) | 
    ((get_nth_bit(immediate_value, 31) ^ get_nth_bit(old_rd_value, 31)) & ~(get_nth_bit(new_rd_value, 31))));

    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 7);
    set_flag_V(matching_signs && (get_nth_bit(old_rd_value, 31) ^ get_flag_N()));
}

void run_00110110(uint16_t opcode) {
    DEBUG_MESSAGE("Add Register Immediate");

    int32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint32_t rd             = get_nth_bits(opcode, 8, 11);
    int32_t old_rd_value    = memory.regs[rd];

    memory.regs[rd] += immediate_value;
    int32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z((new_rd_value == 0));

    // Signed carry formula = (A AND B) OR (~DEST AND (A XOR B)) - works for all add operations once tested
    set_flag_C(get_nth_bit(immediate_value, 31) & get_nth_bit(old_rd_value, 31) | 
    ((get_nth_bit(immediate_value, 31) ^ get_nth_bit(old_rd_value, 31)) & ~(get_nth_bit(new_rd_value, 31))));

    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 7);
    set_flag_V(matching_signs && (get_nth_bit(old_rd_value, 31) ^ get_flag_N()));
}

void run_00110111(uint16_t opcode) {
    DEBUG_MESSAGE("Add Register Immediate");

    int32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint32_t rd             = get_nth_bits(opcode, 8, 11);
    int32_t old_rd_value    = memory.regs[rd];

    memory.regs[rd] += immediate_value;
    int32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z((new_rd_value == 0));

    // Signed carry formula = (A AND B) OR (~DEST AND (A XOR B)) - works for all add operations once tested
    set_flag_C(get_nth_bit(immediate_value, 31) & get_nth_bit(old_rd_value, 31) | 
    ((get_nth_bit(immediate_value, 31) ^ get_nth_bit(old_rd_value, 31)) & ~(get_nth_bit(new_rd_value, 31))));

    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 7);
    set_flag_V(matching_signs && (get_nth_bit(old_rd_value, 31) ^ get_flag_N()));
}

void run_00111000(uint16_t opcode) {
    // maybe we can link add immediate with subtract immediate using twos complement...
    // like, a - b is the same as a + (~b)
    DEBUG_MESSAGE("Subtract Immediate");

    uint32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint8_t  rd              = get_nth_bits(opcode, 8, 11);
    uint32_t old_rd_value    = memory.regs[rd];
    
    memory.regs[rd]  -= immediate_value;
    uint32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z(new_rd_value == 0);
    set_flag_C(immediate_value > old_rd_value);

    // this is garbage, but essentially what's going on is:
    // if the two operands had matching signs but their sign differed from the result's sign,
    // then there was an overflow and we set the flag.
    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 31);
    set_flag_V(matching_signs && (get_nth_bit(new_rd_value, 31) ^ get_flag_N()));
}

void run_00111001(uint16_t opcode) {
    // maybe we can link add immediate with subtract immediate using twos complement...
    // like, a - b is the same as a + (~b)
    DEBUG_MESSAGE("Subtract Immediate");

    uint32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint8_t  rd              = get_nth_bits(opcode, 8, 11);
    uint32_t old_rd_value    = memory.regs[rd];
    
    memory.regs[rd]  -= immediate_value;
    uint32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z(new_rd_value == 0);
    set_flag_C(immediate_value > old_rd_value);

    // this is garbage, but essentially what's going on is:
    // if the two operands had matching signs but their sign differed from the result's sign,
    // then there was an overflow and we set the flag.
    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 31);
    set_flag_V(matching_signs && (get_nth_bit(new_rd_value, 31) ^ get_flag_N()));
}

void run_00111010(uint16_t opcode) {
    // maybe we can link add immediate with subtract immediate using twos complement...
    // like, a - b is the same as a + (~b)
    DEBUG_MESSAGE("Subtract Immediate");

    uint32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint8_t  rd              = get_nth_bits(opcode, 8, 11);
    uint32_t old_rd_value    = memory.regs[rd];
    
    memory.regs[rd]  -= immediate_value;
    uint32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z(new_rd_value == 0);
    set_flag_C(immediate_value > old_rd_value);

    // this is garbage, but essentially what's going on is:
    // if the two operands had matching signs but their sign differed from the result's sign,
    // then there was an overflow and we set the flag.
    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 31);
    set_flag_V(matching_signs && (get_nth_bit(new_rd_value, 31) ^ get_flag_N()));
}

void run_00111011(uint16_t opcode) {
    // maybe we can link add immediate with subtract immediate using twos complement...
    // like, a - b is the same as a + (~b)
    DEBUG_MESSAGE("Subtract Immediate");

    uint32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint8_t  rd              = get_nth_bits(opcode, 8, 11);
    uint32_t old_rd_value    = memory.regs[rd];
    
    memory.regs[rd]  -= immediate_value;
    uint32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z(new_rd_value == 0);
    set_flag_C(immediate_value > old_rd_value);

    // this is garbage, but essentially what's going on is:
    // if the two operands had matching signs but their sign differed from the result's sign,
    // then there was an overflow and we set the flag.
    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 31);
    set_flag_V(matching_signs && (get_nth_bit(new_rd_value, 31) ^ get_flag_N()));
}

void run_00111100(uint16_t opcode) {
    // maybe we can link add immediate with subtract immediate using twos complement...
    // like, a - b is the same as a + (~b)
    DEBUG_MESSAGE("Subtract Immediate");

    uint32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint8_t  rd              = get_nth_bits(opcode, 8, 11);
    uint32_t old_rd_value    = memory.regs[rd];
    
    memory.regs[rd]  -= immediate_value;
    uint32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z(new_rd_value == 0);
    set_flag_C(immediate_value > old_rd_value);

    // this is garbage, but essentially what's going on is:
    // if the two operands had matching signs but their sign differed from the result's sign,
    // then there was an overflow and we set the flag.
    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 31);
    set_flag_V(matching_signs && (get_nth_bit(new_rd_value, 31) ^ get_flag_N()));
}

void run_00111101(uint16_t opcode) {
    // maybe we can link add immediate with subtract immediate using twos complement...
    // like, a - b is the same as a + (~b)
    DEBUG_MESSAGE("Subtract Immediate");

    uint32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint8_t  rd              = get_nth_bits(opcode, 8, 11);
    uint32_t old_rd_value    = memory.regs[rd];
    
    memory.regs[rd]  -= immediate_value;
    uint32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z(new_rd_value == 0);
    set_flag_C(immediate_value > old_rd_value);

    // this is garbage, but essentially what's going on is:
    // if the two operands had matching signs but their sign differed from the result's sign,
    // then there was an overflow and we set the flag.
    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 31);
    set_flag_V(matching_signs && (get_nth_bit(new_rd_value, 31) ^ get_flag_N()));
}

void run_00111110(uint16_t opcode) {
    // maybe we can link add immediate with subtract immediate using twos complement...
    // like, a - b is the same as a + (~b)
    DEBUG_MESSAGE("Subtract Immediate");

    uint32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint8_t  rd              = get_nth_bits(opcode, 8, 11);
    uint32_t old_rd_value    = memory.regs[rd];
    
    memory.regs[rd]  -= immediate_value;
    uint32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z(new_rd_value == 0);
    set_flag_C(immediate_value > old_rd_value);

    // this is garbage, but essentially what's going on is:
    // if the two operands had matching signs but their sign differed from the result's sign,
    // then there was an overflow and we set the flag.
    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 31);
    set_flag_V(matching_signs && (get_nth_bit(new_rd_value, 31) ^ get_flag_N()));
}

void run_00111111(uint16_t opcode) {
    // maybe we can link add immediate with subtract immediate using twos complement...
    // like, a - b is the same as a + (~b)
    DEBUG_MESSAGE("Subtract Immediate");

    uint32_t immediate_value = get_nth_bits(opcode, 0, 8);
    uint8_t  rd              = get_nth_bits(opcode, 8, 11);
    uint32_t old_rd_value    = memory.regs[rd];
    
    memory.regs[rd]  -= immediate_value;
    uint32_t new_rd_value    = memory.regs[rd];

    set_flag_N(get_nth_bit(new_rd_value, 31));
    set_flag_Z(new_rd_value == 0);
    set_flag_C(immediate_value > old_rd_value);

    // this is garbage, but essentially what's going on is:
    // if the two operands had matching signs but their sign differed from the result's sign,
    // then there was an overflow and we set the flag.
    bool matching_signs = get_nth_bit(old_rd_value, 31) == get_nth_bit(immediate_value, 31);
    set_flag_V(matching_signs && (get_nth_bit(new_rd_value, 31) ^ get_flag_N()));
}

void run_01000000(uint16_t opcode) {
    DEBUG_MESSAGE("ALU Operation - AND / EOR / LSL #2 / LSR #2");
    uint8_t rd = get_nth_bits(opcode, 0, 3);
    uint8_t rm = get_nth_bits(opcode, 3, 6);

    switch (get_nth_bits(opcode, 6, 8)) {
        case 0b00:
            memory.regs[rd] &= memory.regs[rm];
            break;
        case 0b01:
            memory.regs[rd] ^= memory.regs[rm];
            break;
        case 0b10:
            if ((memory.regs[rm] & 0xFF) < 32 && (memory.regs[rm] & 0xFF) != 0) {
                set_flag_C(get_nth_bit(memory.regs[rd], 32 - (memory.regs[rm] & 0xFF)));
                memory.regs[rd] <<= (memory.regs[rm] & 0xFF);
            } else if ((memory.regs[rm] & 0xFF) == 32) {
                set_flag_C(memory.regs[rd] & 1);
                memory.regs[rd] = 0;
            } else if ((memory.regs[rm] & 0xFF) > 32) {
                set_flag_C(false);
                memory.regs[rd] = 0;
            }
            break;
        case 0b11:
            if ((memory.regs[rm] & 0xFF) < 32 && (memory.regs[rm] & 0xFF) != 0) {
                set_flag_C(get_nth_bit(memory.regs[rd], (memory.regs[rm] & 0xFF) - 1));
                memory.regs[rd] >>= (memory.regs[rm] & 0xFF);
            } else if ((memory.regs[rm] & 0xFF) == 32) {
                set_flag_C(memory.regs[rd] >> 31);
                memory.regs[rd] = 0;
            } else if ((memory.regs[rm] & 0xFF) > 32) {
                set_flag_C(false);
                memory.regs[rd] = 0;
            }
            break;
    }

    set_flag_N(memory.regs[rd] >> 31);
    set_flag_Z(memory.regs[rd] == 0);
}

void run_01000001(uint16_t opcode) {
    DEBUG_MESSAGE("ALU Operation - ASR #2 / ADC / SBC / ROR");
    uint8_t rd = get_nth_bits(opcode, 0, 3);
    uint8_t rm = get_nth_bits(opcode, 3, 6);

    switch (get_nth_bits(opcode, 6, 8)) {
        case 0b00:
            // ASR #2
            uint8_t low_byte = memory.regs[rm] & 0xFF;
            if (low_byte < 32 && low_byte != 0) {
                set_flag_C(get_nth_bit(memory.regs[rd], low_byte - 1));
                // arithmetic shift requires us to cast to signed int first, then back to unsigned to store in registers.
                memory.regs[rd] = (uint32_t) (((int32_t) memory.regs[rd]) >> memory.regs[rm]);
            } else if (low_byte >= 32) {
                set_flag_C(memory.regs[rd] >> 31);
                if (get_flag_C()) {
                    memory.regs[rd] = 0xFFFFFFFF; // taking into account two's complement
                } else {
                    memory.regs[rd] = 0x00000000;
                }
            }
            break;
    }

    set_flag_N(memory.regs[rd] >> 31);
    set_flag_Z(memory.regs[rd] == 0);
}

void run_01000010(uint16_t opcode) {
    DEBUG_MESSAGE("ALU Operation");
    uint8_t operation = get_nth_bits(opcode, 6, 10);
}

void run_01000011(uint16_t opcode) {
    DEBUG_MESSAGE("ALU Operation - Bit Clear (BIC)");
    uint8_t rd = get_nth_bits(opcode, 0, 3);
    uint8_t rm = get_nth_bits(opcode, 3, 6);
    memory.regs[rd] = memory.regs[rd] & ~ memory.regs[rm];

    set_flag_N(get_nth_bit(memory.regs[rd], 31));
    set_flag_Z(memory.regs[rd] == 0);
}

void run_01000100(uint16_t opcode) {

}

void run_01000101(uint16_t opcode) {

}

void run_01000110(uint16_t opcode) {

}

void run_01000111(uint16_t opcode) {

}

void run_01001000(uint16_t opcode) {
    DEBUG_MESSAGE("PC-Relative Load");
    uint8_t reg = get_nth_bits(opcode, 8,  11);
    uint32_t loc = (get_nth_bits(opcode, 0,  8) << 2) + *memory.pc + 2;
    memory.regs[reg] = *((uint32_t*)(memory.main + loc));
}

void run_01001001(uint16_t opcode) {
    DEBUG_MESSAGE("PC-Relative Load");
    uint8_t reg = get_nth_bits(opcode, 8,  11);
    uint32_t loc = (get_nth_bits(opcode, 0,  8) << 2) + *memory.pc + 2;
    memory.regs[reg] = *((uint32_t*)(memory.main + loc));
}

void run_01001010(uint16_t opcode) {
    DEBUG_MESSAGE("PC-Relative Load");
    uint8_t reg = get_nth_bits(opcode, 8,  11);
    uint32_t loc = (get_nth_bits(opcode, 0,  8) << 2) + *memory.pc + 2;
    memory.regs[reg] = *((uint32_t*)(memory.main + loc));
}

void run_01001011(uint16_t opcode) {
    DEBUG_MESSAGE("PC-Relative Load");
    uint8_t reg = get_nth_bits(opcode, 8,  11);
    uint32_t loc = (get_nth_bits(opcode, 0,  8) << 2) + *memory.pc + 2;
    memory.regs[reg] = *((uint32_t*)(memory.main + loc));
}

void run_01001100(uint16_t opcode) {
    DEBUG_MESSAGE("PC-Relative Load");
    uint8_t reg = get_nth_bits(opcode, 8,  11);
    uint32_t loc = (get_nth_bits(opcode, 0,  8) << 2) + *memory.pc + 2;
    memory.regs[reg] = *((uint32_t*)(memory.main + loc));
}

void run_01001101(uint16_t opcode) {
    DEBUG_MESSAGE("PC-Relative Load");
    uint8_t reg = get_nth_bits(opcode, 8,  11);
    uint32_t loc = (get_nth_bits(opcode, 0,  8) << 2) + *memory.pc + 2;
    memory.regs[reg] = *((uint32_t*)(memory.main + loc));
}

void run_01001110(uint16_t opcode) {
    DEBUG_MESSAGE("PC-Relative Load");
    uint8_t reg = get_nth_bits(opcode, 8,  11);
    uint32_t loc = (get_nth_bits(opcode, 0,  8) << 2) + *memory.pc + 2;
    memory.regs[reg] = *((uint32_t*)(memory.main + loc));
}

void run_01001111(uint16_t opcode) {
    DEBUG_MESSAGE("PC-Relative Load");
    uint8_t reg = get_nth_bits(opcode, 8,  11);
    uint32_t loc = (get_nth_bits(opcode, 0,  8) << 2) + *memory.pc + 2;
    memory.regs[reg] = *((uint32_t*)(memory.main + loc));
}

void run_01010000(uint16_t opcode) {

}

void run_01010001(uint16_t opcode) {

}

void run_01010010(uint16_t opcode) {

}

void run_01010011(uint16_t opcode) {

}

void run_01010100(uint16_t opcode) {

}

void run_01010101(uint16_t opcode) {

}

void run_01010110(uint16_t opcode) {

}

void run_01010111(uint16_t opcode) {

}

void run_01011000(uint16_t opcode) {

}

void run_01011001(uint16_t opcode) {

}

void run_01011010(uint16_t opcode) {

}

void run_01011011(uint16_t opcode) {

}

void run_01011100(uint16_t opcode) {

}

void run_01011101(uint16_t opcode) {

}

void run_01011110(uint16_t opcode) {

}

void run_01011111(uint16_t opcode) {

}

void run_01100000(uint16_t opcode) {

}

void run_01100001(uint16_t opcode) {

}

void run_01100010(uint16_t opcode) {

}

void run_01100011(uint16_t opcode) {

}

void run_01100100(uint16_t opcode) {

}

void run_01100101(uint16_t opcode) {

}

void run_01100110(uint16_t opcode) {

}

void run_01100111(uint16_t opcode) {

}

void run_01101000(uint16_t opcode) {

}

void run_01101001(uint16_t opcode) {

}

void run_01101010(uint16_t opcode) {

}

void run_01101011(uint16_t opcode) {

}

void run_01101100(uint16_t opcode) {

}

void run_01101101(uint16_t opcode) {

}

void run_01101110(uint16_t opcode) {

}

void run_01101111(uint16_t opcode) {

}

void run_01110000(uint16_t opcode) {

}

void run_01110001(uint16_t opcode) {

}

void run_01110010(uint16_t opcode) {

}

void run_01110011(uint16_t opcode) {

}

void run_01110100(uint16_t opcode) {

}

void run_01110101(uint16_t opcode) {

}

void run_01110110(uint16_t opcode) {

}

void run_01110111(uint16_t opcode) {

}

void run_01111000(uint16_t opcode) {

}

void run_01111001(uint16_t opcode) {

}

void run_01111010(uint16_t opcode) {

}

void run_01111011(uint16_t opcode) {

}

void run_01111100(uint16_t opcode) {

}

void run_01111101(uint16_t opcode) {

}

void run_01111110(uint16_t opcode) {

}

void run_01111111(uint16_t opcode) {

}

void run_10000000(uint16_t opcode) {
    uint8_t base  = get_nth_bits(opcode, 3,  6);
    uint8_t dest  = get_nth_bits(opcode, 0,  3);
    uint8_t shift = get_nth_bits(opcode, 6,  11);

    memory.regs[dest] = *((halfword*)(memory.main + memory.regs[base] + shift * 2));
}

void run_10000001(uint16_t opcode) {
    uint8_t base  = get_nth_bits(opcode, 3,  6);
    uint8_t dest  = get_nth_bits(opcode, 0,  3);
    uint8_t shift = get_nth_bits(opcode, 6,  11);

    memory.regs[dest] = *((halfword*)(memory.main + memory.regs[base] + shift * 2));
}

void run_10000010(uint16_t opcode) {
    uint8_t base  = get_nth_bits(opcode, 3,  6);
    uint8_t dest  = get_nth_bits(opcode, 0,  3);
    uint8_t shift = get_nth_bits(opcode, 6,  11);

    memory.regs[dest] = *((halfword*)(memory.main + memory.regs[base] + shift * 2));
}

void run_10000011(uint16_t opcode) {
    uint8_t base  = get_nth_bits(opcode, 3,  6);
    uint8_t dest  = get_nth_bits(opcode, 0,  3);
    uint8_t shift = get_nth_bits(opcode, 6,  11);

    memory.regs[dest] = *((halfword*)(memory.main + memory.regs[base] + shift * 2));
}

void run_10000100(uint16_t opcode) {
    uint8_t base  = get_nth_bits(opcode, 3,  6);
    uint8_t dest  = get_nth_bits(opcode, 0,  3);
    uint8_t shift = get_nth_bits(opcode, 6,  11);

    memory.regs[dest] = *((halfword*)(memory.main + memory.regs[base] + shift * 2));
}

void run_10000101(uint16_t opcode) {
    uint8_t base  = get_nth_bits(opcode, 3,  6);
    uint8_t dest  = get_nth_bits(opcode, 0,  3);
    uint8_t shift = get_nth_bits(opcode, 6,  11);

    memory.regs[dest] = *((halfword*)(memory.main + memory.regs[base] + shift * 2));
}

void run_10000110(uint16_t opcode) {
    uint8_t base  = get_nth_bits(opcode, 3,  6);
    uint8_t dest  = get_nth_bits(opcode, 0,  3);
    uint8_t shift = get_nth_bits(opcode, 6,  11);

    memory.regs[dest] = *((halfword*)(memory.main + memory.regs[base] + shift * 2));
}

void run_10000111(uint16_t opcode) {
    uint8_t base  = get_nth_bits(opcode, 3,  6);
    uint8_t dest  = get_nth_bits(opcode, 0,  3);
    uint8_t shift = get_nth_bits(opcode, 6,  11);

    memory.regs[dest] = *((halfword*)(memory.main + memory.regs[base] + shift * 2));
}

void run_10001000(uint16_t opcode) {

}

void run_10001001(uint16_t opcode) {

}

void run_10001010(uint16_t opcode) {

}

void run_10001011(uint16_t opcode) {

}

void run_10001100(uint16_t opcode) {

}

void run_10001101(uint16_t opcode) {

}

void run_10001110(uint16_t opcode) {

}

void run_10001111(uint16_t opcode) {

}

void run_10010000(uint16_t opcode) {

}

void run_10010001(uint16_t opcode) {

}

void run_10010010(uint16_t opcode) {

}

void run_10010011(uint16_t opcode) {

}

void run_10010100(uint16_t opcode) {

}

void run_10010101(uint16_t opcode) {

}

void run_10010110(uint16_t opcode) {

}

void run_10010111(uint16_t opcode) {

}

void run_10011000(uint16_t opcode) {

}

void run_10011001(uint16_t opcode) {

}

void run_10011010(uint16_t opcode) {

}

void run_10011011(uint16_t opcode) {

}

void run_10011100(uint16_t opcode) {

}

void run_10011101(uint16_t opcode) {

}

void run_10011110(uint16_t opcode) {

}

void run_10011111(uint16_t opcode) {

}

void run_10100000(uint16_t opcode) {

}

void run_10100001(uint16_t opcode) {

}

void run_10100010(uint16_t opcode) {

}

void run_10100011(uint16_t opcode) {

}

void run_10100100(uint16_t opcode) {

}

void run_10100101(uint16_t opcode) {

}

void run_10100110(uint16_t opcode) {

}

void run_10100111(uint16_t opcode) {

}

void run_10101000(uint16_t opcode) {

}

void run_10101001(uint16_t opcode) {

}

void run_10101010(uint16_t opcode) {

}

void run_10101011(uint16_t opcode) {

}

void run_10101100(uint16_t opcode) {

}

void run_10101101(uint16_t opcode) {

}

void run_10101110(uint16_t opcode) {

}

void run_10101111(uint16_t opcode) {

}

void run_10110000(uint16_t opcode) {

}

void run_10110001(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_10110010(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_10110011(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_10110100(uint16_t opcode) {

}

void run_10110101(uint16_t opcode) {

}

void run_10110110(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_10110111(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_10111000(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_10111001(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_10111010(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_10111011(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_10111100(uint16_t opcode) {

}

void run_10111101(uint16_t opcode) {

}

void run_10111110(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_10111111(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_11000000(uint16_t opcode) {
    DEBUG_MESSAGE("Multiple Store (STMIA)");
    uint32_t start_address = memory.regs[get_nth_bits(opcode, 8, 10)];
    uint8_t  register_list = get_nth_bits(opcode, 0, 8);

    for (int i = 0; i < 8; i++) {
        // should we store this register?
        if (get_nth_bit(register_list, i)) {
            *(uint32_t*)(memory.main + start_address) = memory.regs[i];
            start_address += 4;
            memory.regs[get_nth_bits(opcode, 8, 10)] += 4;
        }
    }
}

void run_11000001(uint16_t opcode) {
    DEBUG_MESSAGE("Multiple Store (STMIA)");
    uint32_t start_address = memory.regs[get_nth_bits(opcode, 8, 10)];
    uint8_t  register_list = get_nth_bits(opcode, 0, 8);

    for (int i = 0; i < 8; i++) {
        // should we store this register?
        if (get_nth_bit(register_list, i)) {
            *(uint32_t*)(memory.main + start_address) = memory.regs[i];
            start_address += 4;
            memory.regs[get_nth_bits(opcode, 8, 10)] += 4;
        }
    }
}

void run_11000010(uint16_t opcode) {
    DEBUG_MESSAGE("Multiple Store (STMIA)");
    uint32_t start_address = memory.regs[get_nth_bits(opcode, 8, 10)];
    uint8_t  register_list = get_nth_bits(opcode, 0, 8);

    for (int i = 0; i < 8; i++) {
        // should we store this register?
        if (get_nth_bit(register_list, i)) {
            *(uint32_t*)(memory.main + start_address) = memory.regs[i];
            start_address += 4;
            memory.regs[get_nth_bits(opcode, 8, 10)] += 4;
        }
    }
}

void run_11000011(uint16_t opcode) {
    DEBUG_MESSAGE("Multiple Store (STMIA)");
    uint32_t start_address = memory.regs[get_nth_bits(opcode, 8, 10)];
    uint8_t  register_list = get_nth_bits(opcode, 0, 8);

    for (int i = 0; i < 8; i++) {
        // should we store this register?
        if (get_nth_bit(register_list, i)) {
            *(uint32_t*)(memory.main + start_address) = memory.regs[i];
            start_address += 4;
            memory.regs[get_nth_bits(opcode, 8, 10)] += 4;
        }
    }
}

void run_11000100(uint16_t opcode) {
    DEBUG_MESSAGE("Multiple Store (STMIA)");
    uint32_t start_address = memory.regs[get_nth_bits(opcode, 8, 10)];
    uint8_t  register_list = get_nth_bits(opcode, 0, 8);

    for (int i = 0; i < 8; i++) {
        // should we store this register?
        if (get_nth_bit(register_list, i)) {
            *(uint32_t*)(memory.main + start_address) = memory.regs[i];
            start_address += 4;
            memory.regs[get_nth_bits(opcode, 8, 10)] += 4;
        }
    }
}

void run_11000101(uint16_t opcode) {
    DEBUG_MESSAGE("Multiple Store (STMIA)");
    uint32_t start_address = memory.regs[get_nth_bits(opcode, 8, 10)];
    uint8_t  register_list = get_nth_bits(opcode, 0, 8);

    for (int i = 0; i < 8; i++) {
        // should we store this register?
        if (get_nth_bit(register_list, i)) {
            *(uint32_t*)(memory.main + start_address) = memory.regs[i];
            start_address += 4;
            memory.regs[get_nth_bits(opcode, 8, 10)] += 4;
        }
    }
}

void run_11000110(uint16_t opcode) {
    DEBUG_MESSAGE("Multiple Store (STMIA)");
    uint32_t start_address = memory.regs[get_nth_bits(opcode, 8, 10)];
    uint8_t  register_list = get_nth_bits(opcode, 0, 8);

    for (int i = 0; i < 8; i++) {
        // should we store this register?
        if (get_nth_bit(register_list, i)) {
            *(uint32_t*)(memory.main + start_address) = memory.regs[i];
            start_address += 4;
            memory.regs[get_nth_bits(opcode, 8, 10)] += 4;
        }
    }
}

void run_11000111(uint16_t opcode) {
    DEBUG_MESSAGE("Multiple Store (STMIA)");
    uint32_t start_address = memory.regs[get_nth_bits(opcode, 8, 10)];
    uint8_t  register_list = get_nth_bits(opcode, 0, 8);

    for (int i = 0; i < 8; i++) {
        // should we store this register?
        if (get_nth_bit(register_list, i)) {
            *(uint32_t*)(memory.main + start_address) = memory.regs[i];
            start_address += 4;
            memory.regs[get_nth_bits(opcode, 8, 10)] += 4;
        }
    }
}

void run_11001000(uint16_t opcode) {

}

void run_11001001(uint16_t opcode) {

}

void run_11001010(uint16_t opcode) {

}

void run_11001011(uint16_t opcode) {

}

void run_11001100(uint16_t opcode) {

}

void run_11001101(uint16_t opcode) {

}

void run_11001110(uint16_t opcode) {

}

void run_11001111(uint16_t opcode) {

}

void run_11010000(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (get_flag_Z()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11010001(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (!get_flag_Z()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11010010(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (get_flag_C()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11010011(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (!get_flag_C()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11010100(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (get_flag_N()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11010101(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (!get_flag_N()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11010110(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (get_flag_V()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11010111(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (!get_flag_V()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11011000(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (get_flag_C() && !get_flag_Z()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11011001(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (!get_flag_C() && get_flag_Z()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11011010(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (get_flag_N() == get_flag_V()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11011011(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (get_flag_N() ^ get_flag_V()) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11011100(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (!get_flag_Z() && (get_flag_N() == get_flag_V())) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11011101(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (get_flag_Z() || (get_flag_N() ^ get_flag_V())) {
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11011110(uint16_t opcode) {
    // this may look daunting, but it's just the different possibilities for COND.
    // each COND has a different if expression we need to consider.
    if (true) { // the compiler will optimize this so it's fine
        DEBUG_MESSAGE("Conditional Branch Taken");
        *memory.pc += ((int8_t)(opcode & 0xFF)) * 2 + 2;
    } else {
        DEBUG_MESSAGE("Conditional Branch Not Taken");
    }
}

void run_11011111(uint16_t opcode) {

}

void run_11100000(uint16_t opcode) {
    DEBUG_MESSAGE("Unconditional Branch");

    int32_t sign_extended = (int32_t) (get_nth_bits(opcode, 0, 11));
    *memory.pc = (*memory.pc + 2) + (sign_extended << 1);
}

void run_11100001(uint16_t opcode) {
    DEBUG_MESSAGE("Unconditional Branch");

    int32_t sign_extended = (int32_t) (get_nth_bits(opcode, 0, 11));
    *memory.pc = (*memory.pc + 2) + (sign_extended << 1);
}

void run_11100010(uint16_t opcode) {
    DEBUG_MESSAGE("Unconditional Branch");

    int32_t sign_extended = (int32_t) (get_nth_bits(opcode, 0, 11));
    *memory.pc = (*memory.pc + 2) + (sign_extended << 1);
}

void run_11100011(uint16_t opcode) {
    DEBUG_MESSAGE("Unconditional Branch");

    int32_t sign_extended = (int32_t) (get_nth_bits(opcode, 0, 11));
    *memory.pc = (*memory.pc + 2) + (sign_extended << 1);
}

void run_11100100(uint16_t opcode) {
    DEBUG_MESSAGE("Unconditional Branch");

    int32_t sign_extended = (int32_t) (get_nth_bits(opcode, 0, 11));
    *memory.pc = (*memory.pc + 2) + (sign_extended << 1);
}

void run_11100101(uint16_t opcode) {
    DEBUG_MESSAGE("Unconditional Branch");

    int32_t sign_extended = (int32_t) (get_nth_bits(opcode, 0, 11));
    *memory.pc = (*memory.pc + 2) + (sign_extended << 1);
}

void run_11100110(uint16_t opcode) {
    DEBUG_MESSAGE("Unconditional Branch");

    int32_t sign_extended = (int32_t) (get_nth_bits(opcode, 0, 11));
    *memory.pc = (*memory.pc + 2) + (sign_extended << 1);
}

void run_11100111(uint16_t opcode) {
    DEBUG_MESSAGE("Unconditional Branch");

    int32_t sign_extended = (int32_t) (get_nth_bits(opcode, 0, 11));
    *memory.pc = (*memory.pc + 2) + (sign_extended << 1);
}

void run_11101000(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_11101001(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_11101010(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_11101011(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_11101100(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_11101101(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_11101110(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_11101111(uint16_t opcode) {
    DEBUG_MESSAGE("NOP");
}

void run_11110000(uint16_t opcode) {

    // Sign extend to 32 bits and then left shift 12
    int32_t extended = (int32_t)(get_nth_bits(opcode, 0, 11));
    *memory.lr = (*memory.pc + 2) + (extended << 12);

}

void run_11110001(uint16_t opcode) {

    // Sign extend to 32 bits and then left shift 12
    int32_t extended = (int32_t)(get_nth_bits(opcode, 0, 11));
    *memory.lr = (*memory.pc + 2) + (extended << 12);

}

void run_11110010(uint16_t opcode) {

    // Sign extend to 32 bits and then left shift 12
    int32_t extended = (int32_t)(get_nth_bits(opcode, 0, 11));
    *memory.lr = (*memory.pc + 2) + (extended << 12);

}

void run_11110011(uint16_t opcode) {

    // Sign extend to 32 bits and then left shift 12
    int32_t extended = (int32_t)(get_nth_bits(opcode, 0, 11));
    *memory.lr = (*memory.pc + 2) + (extended << 12);

}

void run_11110100(uint16_t opcode) {

    // Sign extend to 32 bits and then left shift 12
    int32_t extended = (int32_t)(get_nth_bits(opcode, 0, 11));
    *memory.lr = (*memory.pc + 2) + (extended << 12);

}

void run_11110101(uint16_t opcode) {

    // Sign extend to 32 bits and then left shift 12
    int32_t extended = (int32_t)(get_nth_bits(opcode, 0, 11));
    *memory.lr = (*memory.pc + 2) + (extended << 12);

}

void run_11110110(uint16_t opcode) {

    // Sign extend to 32 bits and then left shift 12
    int32_t extended = (int32_t)(get_nth_bits(opcode, 0, 11));
    *memory.lr = (*memory.pc + 2) + (extended << 12);

}

void run_11110111(uint16_t opcode) {

    // Sign extend to 32 bits and then left shift 12
    int32_t extended = (int32_t)(get_nth_bits(opcode, 0, 11));
    *memory.lr = (*memory.pc + 2) + (extended << 12);

}

void run_11111000(uint16_t opcode) {
    uint32_t next_pc = *(memory.pc);
    *memory.pc = (*memory.lr + (get_nth_bits(opcode, 0, 11) << 1));
    *memory.lr = (next_pc) | 1;
}

void run_11111001(uint16_t opcode) {
    uint32_t next_pc = *(memory.pc);
    *memory.pc = (*memory.lr + (get_nth_bits(opcode, 0, 11) << 1));
    *memory.lr = (next_pc) | 1;
}

void run_11111010(uint16_t opcode) {
    uint32_t next_pc = *(memory.pc);
    *memory.pc = (*memory.lr + (get_nth_bits(opcode, 0, 11) << 1));
    *memory.lr = (next_pc) | 1;
}

void run_11111011(uint16_t opcode) {
    uint32_t next_pc = *(memory.pc);
    *memory.pc = (*memory.lr + (get_nth_bits(opcode, 0, 11) << 1));
    *memory.lr = (next_pc) | 1;
}

void run_11111100(uint16_t opcode) {
    uint32_t next_pc = *(memory.pc);
    *memory.pc = (*memory.lr + (get_nth_bits(opcode, 0, 11) << 1));
    *memory.lr = (next_pc) | 1;
}

void run_11111101(uint16_t opcode) {
    uint32_t next_pc = *(memory.pc);
    *memory.pc = (*memory.lr + (get_nth_bits(opcode, 0, 11) << 1));
    *memory.lr = (next_pc) | 1;
}

void run_11111110(uint16_t opcode) {
    uint32_t next_pc = *(memory.pc);
    *memory.pc = (*memory.lr + (get_nth_bits(opcode, 0, 11) << 1));
    *memory.lr = (next_pc) | 1;
}

void run_11111111(uint16_t opcode) {
    uint32_t next_pc = *(memory.pc);
    *memory.pc = (*memory.lr + (get_nth_bits(opcode, 0, 11) << 1));
    *memory.lr = (next_pc) | 1;
}


instruction jumptable[] = {
    &run_00000000, &run_00000001, &run_00000010, &run_00000011, 
    &run_00000100, &run_00000101, &run_00000110, &run_00000111, 
    &run_00001000, &run_00001001, &run_00001010, &run_00001011, 
    &run_00001100, &run_00001101, &run_00001110, &run_00001111, 
    &run_00010000, &run_00010001, &run_00010010, &run_00010011, 
    &run_00010100, &run_00010101, &run_00010110, &run_00010111, 
    &run_00011000, &run_00011001, &run_00011010, &run_00011011, 
    &run_00011100, &run_00011101, &run_00011110, &run_00011111, 
    &run_00100000, &run_00100001, &run_00100010, &run_00100011, 
    &run_00100100, &run_00100101, &run_00100110, &run_00100111, 
    &run_00101000, &run_00101001, &run_00101010, &run_00101011, 
    &run_00101100, &run_00101101, &run_00101110, &run_00101111, 
    &run_00110000, &run_00110001, &run_00110010, &run_00110011, 
    &run_00110100, &run_00110101, &run_00110110, &run_00110111, 
    &run_00111000, &run_00111001, &run_00111010, &run_00111011, 
    &run_00111100, &run_00111101, &run_00111110, &run_00111111, 
    &run_01000000, &run_01000001, &run_01000010, &run_01000011, 
    &run_01000100, &run_01000101, &run_01000110, &run_01000111, 
    &run_01001000, &run_01001001, &run_01001010, &run_01001011, 
    &run_01001100, &run_01001101, &run_01001110, &run_01001111, 
    &run_01010000, &run_01010001, &run_01010010, &run_01010011, 
    &run_01010100, &run_01010101, &run_01010110, &run_01010111, 
    &run_01011000, &run_01011001, &run_01011010, &run_01011011, 
    &run_01011100, &run_01011101, &run_01011110, &run_01011111, 
    &run_01100000, &run_01100001, &run_01100010, &run_01100011, 
    &run_01100100, &run_01100101, &run_01100110, &run_01100111, 
    &run_01101000, &run_01101001, &run_01101010, &run_01101011, 
    &run_01101100, &run_01101101, &run_01101110, &run_01101111, 
    &run_01110000, &run_01110001, &run_01110010, &run_01110011, 
    &run_01110100, &run_01110101, &run_01110110, &run_01110111, 
    &run_01111000, &run_01111001, &run_01111010, &run_01111011, 
    &run_01111100, &run_01111101, &run_01111110, &run_01111111, 
    &run_10000000, &run_10000001, &run_10000010, &run_10000011, 
    &run_10000100, &run_10000101, &run_10000110, &run_10000111, 
    &run_10001000, &run_10001001, &run_10001010, &run_10001011, 
    &run_10001100, &run_10001101, &run_10001110, &run_10001111, 
    &run_10010000, &run_10010001, &run_10010010, &run_10010011, 
    &run_10010100, &run_10010101, &run_10010110, &run_10010111, 
    &run_10011000, &run_10011001, &run_10011010, &run_10011011, 
    &run_10011100, &run_10011101, &run_10011110, &run_10011111, 
    &run_10100000, &run_10100001, &run_10100010, &run_10100011, 
    &run_10100100, &run_10100101, &run_10100110, &run_10100111, 
    &run_10101000, &run_10101001, &run_10101010, &run_10101011, 
    &run_10101100, &run_10101101, &run_10101110, &run_10101111, 
    &run_10110000, &run_10110001, &run_10110010, &run_10110011, 
    &run_10110100, &run_10110101, &run_10110110, &run_10110111, 
    &run_10111000, &run_10111001, &run_10111010, &run_10111011, 
    &run_10111100, &run_10111101, &run_10111110, &run_10111111, 
    &run_11000000, &run_11000001, &run_11000010, &run_11000011, 
    &run_11000100, &run_11000101, &run_11000110, &run_11000111, 
    &run_11001000, &run_11001001, &run_11001010, &run_11001011, 
    &run_11001100, &run_11001101, &run_11001110, &run_11001111, 
    &run_11010000, &run_11010001, &run_11010010, &run_11010011, 
    &run_11010100, &run_11010101, &run_11010110, &run_11010111, 
    &run_11011000, &run_11011001, &run_11011010, &run_11011011, 
    &run_11011100, &run_11011101, &run_11011110, &run_11011111, 
    &run_11100000, &run_11100001, &run_11100010, &run_11100011, 
    &run_11100100, &run_11100101, &run_11100110, &run_11100111, 
    &run_11101000, &run_11101001, &run_11101010, &run_11101011, 
    &run_11101100, &run_11101101, &run_11101110, &run_11101111, 
    &run_11110000, &run_11110001, &run_11110010, &run_11110011, 
    &run_11110100, &run_11110101, &run_11110110, &run_11110111, 
    &run_11111000, &run_11111001, &run_11111010, &run_11111011, 
    &run_11111100, &run_11111101, &run_11111110, &run_11111111
};
