//利用循环语句，求1~100中的奇数
#include<iostream>
using namespace std;
int main()
{
	float mod;
	for(int i=1; i<=100; i++)
	{
		mod = i % 2;
		if (mod!=0)
		{
			cout << i << endl;
		}
	}
	return 0;
}