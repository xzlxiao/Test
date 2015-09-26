//利用new和delete进行内存的动态分配并进行初始化，最后输出内容
#include<iostream>
using namespace std;
int main()
{
	char*pchar = NULL;
	pchar = new char[10];
	pchar = "请问你是谁";
	cout << pchar << endl;
	cout << &pchar << endl;
	delete[] pchar;
	cout << pchar << endl;
	cout << &pchar << endl;
	*pchar = NULL;
	cout << &pchar << endl;
	return 0;
}