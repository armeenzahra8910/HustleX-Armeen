#pragma once
#include <wx/wx.h>
#include <wx/dialog.h>

class CreateTaskDialogue : public wxDialog
{
	private:
		std::string entered_task_title;

	public:
		CreateTaskDialogue(const wxString& title);


};

