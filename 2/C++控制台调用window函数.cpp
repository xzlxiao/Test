// C++控制台直接调用windows函数
#include <iostream>

#include <windows.h>
#include <stdio.h>
#pragma comment(lib, "user32.lib")
using namespace std;

int _tmain(int argc, _TCHAR *argv[])
{
	int width = ::GetSystemMetrics(SM_CXSCREEN);
	int height = ::GetSystemMetrics(SM_CYSCREEN);
	
	cout << "width:" << width << " height:" << height << endl;
	return 0;
}