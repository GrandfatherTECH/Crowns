#include "MyForm.h" 
#include <Windows.h> 
using namespace Crowns; // Название проекта 

[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) { 
	Application::EnableVisualStyles(); 
	Application::SetCompatibleTextRenderingDefault(false); 
	Application::Run(gcnew Crowns::MyForm); 
	return 0;
}


