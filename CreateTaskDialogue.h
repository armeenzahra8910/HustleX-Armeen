#pragma once
#include <wx/wx.h>
#include <wx/dialog.h>
#include <wx/spinctrl.h>
class CreateTaskDialogue : public wxDialog
{
	private:
		std::string entered_task_title;
		std::string entered_task_desc;
		int entered_task_reward{};
		std::string entered_address;

		wxTextCtrl *task_title;
		wxTextCtrl* task_desc;
		wxSpinCtrl* task_reward;
		wxTextCtrl* user_address;
	public:
		CreateTaskDialogue(const wxString& title);
		std::string get_entered_task_title();
		std::string get_entered_task_desc();
		int get_entered_task_price();
		std::string get_entered_address();
		void create_task(wxCommandEvent& evt);
};

