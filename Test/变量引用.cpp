//声明一个变量的引用并对其进行操作，最后输出结果。
#include<iostream>
using namespace std;
int main()
{
	int num1 = 100;
	int &rnum1 = num1;
	cout << rnum1 << endl;
	cout << ++rnum1 << endl;
	cout << num1 << endl;
	return 0;
}