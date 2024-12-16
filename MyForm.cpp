#include "MyForm.h"
//using namespace System;
//using namespace System::Windows::Forms;
//[STAThreadAttribute]
//int main(cli::array<String^>^ args) {
//	//ShowWindow(FindWindowA("ConsoleWindowClass", NULL), false);
//	Application::SetCompatibleTextRenderingDefault(false);
//	Application::EnableVisualStyles();
//	ksr10form::MyForm form;
//	Application::Run(% form);
//}

#include <Windows.h>

using namespace ksr10form;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}