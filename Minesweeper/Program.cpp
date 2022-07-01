#include "Program.h"

wxIMPLEMENT_APP(Program);

Program::Program()
{

}

Program::~Program()
{

}

bool Program::OnInit()
{
	frame1 = new Main();
	frame1->Show();

	return true;
}