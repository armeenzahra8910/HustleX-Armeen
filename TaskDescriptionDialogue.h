#pragma once
#include <wx/wx.h>
#include <wx/dialog.h>



class TaskDescriptionDialogue : public wxDialog
{
private:
	wxString task_title;
	wxString task_desc;
	wxString task_reward;
	wxString task_address;
	// here task_title , task_des and task_reward are passed from MainFrame (these are the selected task row values)
	public:
		TaskDescriptionDialogue(const wxString& title, wxString task_title, wxString task_des,
			wxString task_reward, wxString task_address, wxString contact);

		void close(wxCommandEvent& evt);


};

