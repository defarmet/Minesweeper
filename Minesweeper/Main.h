#pragma once
#include "wx\wx.h"

class Main : public wxFrame {
public:
	Main();
	~Main();

	int W = 10;
	int H = 10;
	wxButton **btn;
	int *field = nullptr;
	bool first_click = true;

	void OnButtonClicked(wxCommandEvent &e);

	wxDECLARE_EVENT_TABLE();
};