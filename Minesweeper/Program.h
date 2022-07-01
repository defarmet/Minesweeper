#pragma once

#include "Main.h"
#include "wx\wx.h"

class Program : public wxApp {
private:
	Main *frame1 = nullptr;

public:
	Program();
	~Program();
	virtual bool OnInit();
};