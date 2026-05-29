#include "CreateTaskDialogue.h"

CreateTaskDialogue::CreateTaskDialogue(const wxString& title) : 
	wxDialog(NULL, -1 , title, wxDefaultPosition, wxSize(500,500))
{
	wxStaticText *task_title_txt = new wxStaticText( this, wxID_ANY, "Task Title" ,
		wxPoint(10, 0), wxDefaultSize);
	
	task_title = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 30), wxDefaultSize);

	wxStaticText* task_desc_txt = new wxStaticText(this, wxID_ANY, "Task Description:", wxPoint(200, 0), wxDefaultSize);
	task_desc = new wxTextCtrl(this, wxID_ANY, "", wxPoint(200, 30), wxSize(200, 100), 
		wxTE_MULTILINE);

	wxStaticText* task_reward_txt = new wxStaticText(this, wxID_ANY, "Task Reward :", wxPoint(10, 70), wxDefaultSize);
	task_reward = new wxSpinCtrl(this, wxID_ANY, "", wxPoint(10, 100),
		wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL, 500, 10000);
	
	wxStaticText* user_address_txt = new wxStaticText(this, wxID_ANY, "Task Address:", wxPoint(10, 130), 
		wxDefaultSize);
	user_address = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 160), 
		wxSize(200, 100), wxTE_MULTILINE);

	wxButton* create_button = new wxButton(this, wxID_ANY, "Create", wxPoint(400, 300), wxDefaultSize);
	create_button->Bind(wxEVT_BUTTON, &CreateTaskDialogue::create_task, this);

}

void CreateTaskDialogue::create_task(wxCommandEvent& evt)
{
	this->entered_task_title = this->task_title->GetValue();
	this->entered_task_desc = this->task_desc->GetValue();
	this->entered_address = this->user_address->GetValue();
	this->entered_task_reward = this->task_reward->GetValue();

	if (this->entered_task_title == "")
	{
		wxLogError("Enter a task Name!");
	}

	if (this->entered_task_desc == "")
	{
		wxLogError("Enter task Description.");
	}

	if (this->entered_address == "")
	{
		wxLogError("Enter task address. You cannot keep this empty.");
	}

	if (this->entered_task_title != "" && this->entered_address != "" && this->entered_task_desc != "")
	{
		this->Destroy();
	}


}


std::string CreateTaskDialogue::get_entered_task_title()
{
	return this->entered_task_title;
}
std::string CreateTaskDialogue::get_entered_task_desc()
{
	return this->entered_task_desc;
}
int CreateTaskDialogue::get_entered_task_price()
{
	return this->entered_task_reward;
}
std::string CreateTaskDialogue::get_entered_address()
{
	return this->entered_address;
}