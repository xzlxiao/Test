#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
	MessageBox(NULL, TEXT("Hello, Windows 10!"), TEXT("HelloMsg"), 0x2|0x30|0x200); 
	// ���ĸ������ĵ�һ��Ϊ��ť���ͣ��ڶ���Ϊͼ����ʽ��������ΪĬ�ϰ�ť
	return 0;
}