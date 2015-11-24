//声明一个指针变量及指向指针的指针，并对其进行初始化，最后输出结果
#include<iostream>
using namespace std;
int main()
{
	char sz[] = "你好，科塔娜！";
	char*psz = sz;
	char**ppsz = &psz;
	cout << sz << endl;
	cout << psz << endl;
	cout << ppsz << endl;
	cout << &psz << endl;
	cout << *ppsz << endl;
	return 0;
}