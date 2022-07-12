#pragma once
#include <wx/wx.h>

class MyFrame : public wxFrame
{
public:
    MyFrame();

private:
    void OnHome(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};