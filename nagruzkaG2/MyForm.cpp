#include "MyForm.h"
#include <Windows.h>
using namespace nagruzkaG2;
[STAThread] // ������������� ���������������. � ����� �������� ��� ����
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;

}