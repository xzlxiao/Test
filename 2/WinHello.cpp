#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
	MessageBox(NULL, TEXT("Hello, Windows 10!"), TEXT("HelloMsg"), 0x2|0x30|0x200); 
	// 第四个参数的第一个为按钮类型，第二个为图标样式，第三个为默认按钮
	return 0;
}