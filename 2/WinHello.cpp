#include <windows.h>
#include <iostream>
using namespace std;
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
	int a;
	a = MessageBox(NULL, TEXT("Hello, Windows 10!"), TEXT("HelloMsg"), 0x2|0x30|0x200); 
	// 第四个参数的第一个为按钮类型，第二个为图标样式，第三个为默认按钮
	cout << a << endl;		// 确定：1， 取消：2，  终止：3， 重试：4， 忽略：5，是：6， 否：7， 继续：11， 警告：每一按钮样式返回值可能不一样，使用前需要测试
	return 0;
}