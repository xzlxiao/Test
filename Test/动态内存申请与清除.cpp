//����new��delete�����ڴ�Ķ�̬���䲢���г�ʼ��������������
#include<iostream>
using namespace std;
int main()
{
	char*pchar = NULL;
	pchar = new char[10];
	pchar = "��������˭";
	cout << pchar << endl;
	cout << &pchar << endl;
	delete[] pchar;
	cout << pchar << endl;
	cout << &pchar << endl;
	*pchar = NULL;
	cout << &pchar << endl;
	return 0;
}