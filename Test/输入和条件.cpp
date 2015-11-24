/*编写一个程序，要求可以接受用户输入的数值，当数值大于0时，
输出“>0”；当数值小于0时，输出“<0”;当数值等于0时，输出“=0”。*/
#include<iostream>
using namespace std;
int main()
{
	float num1;
	cin >> num1;
	if (num1==0)
	{
		cout << "=0" <<endl;
	}
	else
	{
	if (num1<0)
	{
		cout << "<0" <<endl;
	}
	else
	{
		cout << ">0" <<endl;
	}
	}
	return 0;
}