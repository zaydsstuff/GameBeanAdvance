#include "main.h"

// TODO: constants file
#define SCREEN_RESOLUTION_WIDTH  240
#define SCREEN_RESOLUTION_HEIGHT 160

MyFrame::MyFrame() : wxFrame(NULL, wxID_ANY, "GameBeanAdvance", wxDefaultPosition, 
                                  wxSize(SCREEN_SCALE_WIDTH  * SCREEN_RESOLUTION_WIDTH, 
                                         SCREEN_SCALE_HEIGHT * SCREEN_RESOLUTION_HEIGHT)) {
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
    SetMenuBar( menuBar );

    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);

    renderTimer = new RenderTimer(this);
    renderTimer->start();
    image = wxImage(SCREEN_RESOLUTION_WIDTH, SCREEN_RESOLUTION_HEIGHT + 20);

    pixels = new uint8_t[240 * 160 * 3];
}

void MyFrame::OnExit(wxCommandEvent& event) {
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent& event) {
    wxMessageBox("This is a wxWidgets Hello World example",
                 "About Hello World", wxOK | wxICON_INFORMATION);
}

void MyFrame::OnHello(wxCommandEvent& event) {
    wxLogMessage("Hello world from wxWidgets!");
}

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
EVT_PAINT(MyFrame::OnPaint)
END_EVENT_TABLE()

void MyFrame::OnPaint(wxPaintEvent& roEvent) {
    wxPaintDC dc(this);
    dc.Clear();
    dc.SetUserScale(SCREEN_SCALE_WIDTH, SCREEN_SCALE_HEIGHT);

    wxImage image(240, 160);
    for (int x = 0; x < 240; x++) {
    for (int y = 0; y < 160; y++) {
        image.SetRGB(x, y, pixels[((x * 160) + y) * 3 + 0],
                           pixels[((x * 160) + y) * 3 + 1],
                           pixels[((x * 160) + y) * 3 + 2]);
    }
    }

    wxBitmap image_buffer(image, -1);
    dc.DrawBitmap(image_buffer, 0, 0);
    //delete image_buffer;
}

void MyFrame::SetRGB(int x, int y, uint8_t r, uint8_t g, uint8_t b) {
    // std::cout << std::to_string(x) << " , " << std::to_string(y) << std::endl;
    pixels[((x * 160) + y) * 3 + 0] = r;
    pixels[((x * 160) + y) * 3 + 1] = g;
    pixels[((x * 160) + y) * 3 + 2] = b;
}