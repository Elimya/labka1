#include "F_labka12.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace labka1;
[STAThread]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew F_labka12());
	return 0;
}