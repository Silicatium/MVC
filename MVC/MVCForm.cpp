#include "MVCForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MVC::MVCForm form;
	Application::Run(% form);
}