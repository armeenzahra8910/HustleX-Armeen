#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	MainFrame* mainframe = new MainFrame("Hustle X");
	mainframe->Show();
	return true;

}

