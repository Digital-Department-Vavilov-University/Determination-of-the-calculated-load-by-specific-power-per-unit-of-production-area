#include "MyForm.h"
#include <Windows.h>
using namespace nagruzkaG2;
[STAThread] // использование многопоточности. В одном процессе два окна
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;

}