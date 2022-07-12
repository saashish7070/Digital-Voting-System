#include <wx/wx.h>
#include "MainFrame.h"
//#include "Windows.h"
enum {
	ID_HOME,
	ID_VOTER,
	ID_CANDIDATE,
	ID_GUIDE
};
MyFrame::MyFrame() : wxFrame(NULL, wxID_ANY, "Digital Voting System")
{
	
	
	//Building Menu Bar
	wxMenu* menuHome = new wxMenu;
	menuHome->Append(ID_HOME, "&HOME\tCtrl-H");
	menuHome->AppendSeparator();
	menuHome->Append(ID_VOTER, "&VOTER\tCtrl-V");
	menuHome->AppendSeparator();
	menuHome->Append(ID_CANDIDATE, "&CANDIDATE\tCtrl-C");
	menuHome->AppendSeparator();
	menuHome->Append(wxID_EXIT);

	wxMenuBar* menuBar = new wxMenuBar;
	menuBar->Append(menuHome, "&HOME");

	SetMenuBar(menuBar);
	CreateStatusBar();

	//Creating windows interface;
	//Creating the outter window
	wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
	//Creating the inner window
	wxPanel* registerPanel = new wxPanel(this);
	wxPanel* loginPanel = new wxPanel(this);

	//Element for the register panel is added
	wxStaticText* signUpText = new wxStaticText(registerPanel, wxID_ANY, "Register to Digital Voting System", wxPoint(50, 0));
	wxFont font = signUpText->GetFont();
	font.SetPointSize(12);
	font.SetWeight(wxFONTWEIGHT_BOLD);
	signUpText->SetFont(font);
	wxStaticText* fullName = new wxStaticText(registerPanel, wxID_ANY, "Full Name", wxPoint(15, 30), wxSize(100, -1));
	wxTextCtrl* fullNameCtrl = new wxTextCtrl(registerPanel, wxID_ANY, "", wxPoint(140, 25), wxSize(200, -1));
	wxStaticText* ctz = new wxStaticText(registerPanel, wxID_ANY, "Citizenship Number", wxPoint(15, 60), wxSize(120, -1));
	wxTextCtrl* ctzCtrl = new wxTextCtrl(registerPanel, wxID_ANY, "", wxPoint(140, 55), wxSize(200, -1));
	wxStaticText* userName = new wxStaticText(registerPanel, wxID_ANY, "UserName", wxPoint(15, 90), wxSize(80, -1));
	wxTextCtrl* userNameCtrl = new wxTextCtrl(registerPanel, wxID_ANY, "", wxPoint(140, 85), wxSize(200, -1));
	wxStaticText* passWord = new wxStaticText(registerPanel, wxID_ANY, "Password", wxPoint(15, 120), wxSize(80, -1));
	wxTextCtrl* passWordCtrl = new wxTextCtrl(registerPanel, wxID_ANY, "", wxPoint(140, 115), wxSize(200, -1), wxTE_PASSWORD);
	wxButton* signUp = new wxButton(registerPanel, wxID_ANY, "Sign Up", wxPoint(80, 200), wxSize(140, -1));
	
	//Element of login is added;
	wxStaticText* loginText = new wxStaticText(loginPanel, wxID_ANY, "Login to Digital Voting System", wxPoint(50, 0));
	wxFont font2 = loginText->GetFont();
	font2.SetPointSize(12);
	font2.SetWeight(wxFONTWEIGHT_BOLD);
	loginText->SetFont(font2);
	wxStaticText* userName2 = new wxStaticText(loginPanel, wxID_ANY, "UserName Name", wxPoint(15, 30), wxSize(100, -1));
	wxTextCtrl* userName2Ctrl = new wxTextCtrl(loginPanel, wxID_ANY, "", wxPoint(140, 25), wxSize(200, -1));
	wxStaticText* passWord2 = new wxStaticText(loginPanel, wxID_ANY, "Password", wxPoint(15, 60), wxSize(80, -1));
	wxTextCtrl* passWord2Ctrl = new wxTextCtrl(loginPanel, wxID_ANY, "", wxPoint(140, 55), wxSize(200, -1), wxTE_PASSWORD);
	wxButton* login = new wxButton(loginPanel, wxID_ANY, "Login", wxPoint(80, 100), wxSize(140, -1));

	//Panels were added to the sizer
	sizer->Add(registerPanel,3,wxEXPAND|wxALL,2);
	sizer->Add(loginPanel, 2, wxEXPAND | wxALL, 2);
	this->SetSizerAndFit(sizer);
}

