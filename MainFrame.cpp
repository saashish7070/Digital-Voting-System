#include "MainFrame.h"
#include <wx/wx.h>
enum
{
    ID_HOME,
    ID_VOTER,
    ID_CANDIDATE,
    ID_GUIDE
};
MyFrame::MyFrame()
    : wxFrame(NULL, wxID_ANY, "Digital Voting System")
{
    wxMenu* menuFile = new wxMenu;
    menuFile->Append(ID_HOME+1, "&Home\tCtrl-H");
    menuFile->AppendSeparator();
    menuFile->Append(ID_VOTER+1, "&Voter\tCtrl-V");
    menuFile->AppendSeparator();
    menuFile->Append(ID_CANDIDATE+1, "&Candidate\tCtrl-C");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    wxMenu* menuGuide = new wxMenu;
    menuGuide->Append(ID_GUIDE, "&Guide\tCtrl+t");

    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuGuide, "&Documentation");
    menuBar->Append(menuHelp, "&Help");
    

    SetMenuBar(menuBar);

    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");

    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_HOME);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
}

void MyFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets Hello World example",
        "About Hello World", wxOK | wxICON_INFORMATION);
}

void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}
