#include <windows.h>
#include <iostream>
using namespace std;
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
	int a;
	a = MessageBox(NULL, TEXT("Hello, Windows 10!"), TEXT("HelloMsg"), 0x2|0x30|0x200); 
	// ���ĸ������ĵ�һ��Ϊ��ť���ͣ��ڶ���Ϊͼ����ʽ��������ΪĬ�ϰ�ť
	cout << a << endl;		// ȷ����1�� ȡ����2��  ��ֹ��3�� ���ԣ�4�� ���ԣ�5���ǣ�6�� ��7�� ������11�� ���棺ÿһ��ť��ʽ����ֵ���ܲ�һ����ʹ��ǰ��Ҫ����
	return 0;
}