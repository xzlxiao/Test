//����һ��ָ�������ָ��ָ���ָ�룬��������г�ʼ�������������
#include<iostream>
using namespace std;
int main()
{
	char sz[] = "��ã������ȣ�";
	char*psz = sz;
	char**ppsz = &psz;
	cout << sz << endl;
	cout << psz << endl;
	cout << ppsz << endl;
	cout << &psz << endl;
	cout << *ppsz << endl;
	return 0;
}