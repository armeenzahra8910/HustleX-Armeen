#include "MainFrame.h" 
#include <wx/wx.h> 
#include <wx/simplebook.h>
#include <wx/listctrl.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{ 

	// master panels and master sizer.
	wxPanel* root = new wxPanel(this);
	wxBoxSizer* rootsizer = new wxBoxSizer(wxVERTICAL);



	// -- Upper Panel content
	wxPanel* upper_panel = new wxPanel(root);
	upper_panel->SetBackgroundColour(wxColor(35, 35, 35)); 

	wxStaticText* welcome_txt = new wxStaticText(upper_panel, wxID_ANY, "Welcome Back USERNAME", wxDefaultPosition); 
	welcome_txt->SetForegroundColour(wxColor(*wxWHITE)); 
	welcome_txt->SetFont(heading_font); 
	wxButton* user_settings = new wxButton(upper_panel, wxID_ANY, "User Settings", wxDefaultPosition, wxDefaultSize); 
	user_settings->SetOwnForegroundColour(wxColor(*wxWHITE)); 
	user_settings->SetOwnBackgroundColour(wxColor(98, 255, 100)); 
	user_settings->SetFont(button_font); user_settings->Refresh(); 
	user_settings->SetWindowStyle(wxBORDER_NONE); 
	wxBoxSizer* box_sizer = new wxBoxSizer(wxHORIZONTAL); 
	box_sizer->Add(welcome_txt,1, wxLEFT | wxRIGHT, 50); 
	box_sizer->Add(user_settings); upper_panel->SetSizer(box_sizer); 
	box_sizer->SetSizeHints(this);

	rootsizer->Add(upper_panel, 0, wxEXPAND);
	//  Upper Panel content   --


	// configuring main content_panel
	wxPanel* content_panel = new wxPanel(root);
	wxBoxSizer* contentSizer = new wxBoxSizer(wxHORIZONTAL);
	rootsizer->Add(content_panel, 1, wxEXPAND);

	// navbar setup 
	wxPanel* navbar = new wxPanel(content_panel);
	navbar->SetBackgroundColour(wxColor(30, 30, 30));
	navbar->SetMinSize(wxSize(180, -1)); 

	wxBoxSizer* navSizer = new wxBoxSizer(wxVERTICAL);


	// buttons for navbar , btn1, btn2, btn3 and lastly btn4
	wxButton* btn1 = new wxButton(navbar, wxID_ANY, "Task Search");
	btn1->SetOwnForegroundColour(wxColor(*wxWHITE));
	btn1->SetOwnBackgroundColour(wxColor(98, 255, 100));
	btn1->SetFont(button_font); 
	btn1->Refresh();
	btn1->SetWindowStyle(wxBORDER_NONE);

	wxButton* btn2 = new wxButton(navbar, wxID_ANY, "Stats");
	btn2->SetOwnForegroundColour(wxColor(*wxWHITE));
	btn2->SetOwnBackgroundColour(wxColor(98, 255, 100));
	btn2->SetFont(button_font); 
	btn2->Refresh();
	btn2->SetWindowStyle(wxBORDER_NONE);

	wxButton* btn3 = new wxButton(navbar, wxID_ANY, "Profile");
	btn3->SetOwnForegroundColour(wxColor(*wxWHITE));
	btn3->SetOwnBackgroundColour(wxColor(98, 255, 100));
	btn3->SetFont(button_font); 
	btn3->Refresh();
	btn3->SetWindowStyle(wxBORDER_NONE);

	wxButton* btn4 = new wxButton(navbar, wxID_ANY, "Create a Task");
	btn4->SetOwnForegroundColour(wxColor(*wxWHITE));
	btn4->SetOwnBackgroundColour(wxColor(98, 255, 100));
	btn4->SetFont(button_font); 
	btn4->Refresh();
	btn4->SetWindowStyle(wxBORDER_NONE);


	navSizer->Add(btn1, 0, wxEXPAND | wxALL, 5);
	navSizer->AddSpacer(10);
	navSizer->Add(btn2, 0, wxEXPAND | wxALL, 5);
	navSizer->AddSpacer(10);
	navSizer->Add(btn3, 0, wxEXPAND | wxALL, 5);
	navSizer->AddSpacer(10);
	navSizer->Add(btn4, 0, wxEXPAND | wxALL, 5);
	navSizer->AddSpacer(10);

	navbar->SetSizer(navSizer);


	wxPanel* view_panel = new wxPanel(content_panel);
	view_panel->SetBackgroundColour(wxColor(45, 45, 45));

	contentSizer->Add(navbar, 0, wxEXPAND);
	contentSizer->Add(view_panel, 1, wxEXPAND);

	content_panel->SetSizer(contentSizer);

	root->SetSizer(rootsizer);
	rootsizer->SetSizeHints(this);

	// -- navbar setup
	wxSimplebook* book = new wxSimplebook(view_panel, wxID_ANY);

	wxPanel* page1 = new wxPanel(book);
		
		// later turn page1 code into function.
		wxStaticText* task_find_heading = new wxStaticText(page1, wxID_ANY, "Find Task : ", wxPoint(30, 30));
		task_find_heading->SetFont(heading_font);
		task_find_heading->SetForegroundColour(wxColor(*wxWHITE)); 
		wxListCtrl* tasks = new wxListCtrl(page1, wxID_ANY, wxPoint(30,70), wxSize(1300, 500));
		wxButton* refreshButton = new wxButton(page1, wxID_ANY, "Refresh Tasks",  wxPoint(30, 600), wxSize(200, 100));
		refreshButton->SetFont(button_font);


	wxPanel* page2 = new wxPanel(book);
	wxPanel* page3 = new wxPanel(book);
	wxPanel* page4 = new wxPanel(book);
		// Later convert into function.
		

	book->AddPage(page1, "Task Search");
	book->AddPage(page2, "Stats");
	book->AddPage(page3, "Profile");
	book->AddPage(page4, "Create a Task");

	wxBoxSizer* viewSizer = new wxBoxSizer(wxVERTICAL);
	viewSizer->Add(book, 1, wxEXPAND);
	view_panel->SetSizer(viewSizer);


	btn1->Bind(wxEVT_BUTTON, [=](wxCommandEvent&) {
		book->ChangeSelection(0);
		});
	btn2->Bind(wxEVT_BUTTON, [=](wxCommandEvent&) {
		book->ChangeSelection(1);
		});
	btn3->Bind(wxEVT_BUTTON, [=](wxCommandEvent&) {
		book->ChangeSelection(2);
		});
	btn4->Bind(wxEVT_BUTTON, [=](wxCommandEvent&) {
		book->ChangeSelection(3);
		});
}
