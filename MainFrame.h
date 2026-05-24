#pragma once
#include <wx/wx.h>
#include <wx/font.h>
class MainFrame : public wxFrame
{
	public:
		MainFrame(const wxString& title);
      
        wxStaticText* welcome_txt;
        wxFont heading_font = wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
        wxFont button_font = wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);

};

