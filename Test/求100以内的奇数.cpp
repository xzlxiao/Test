//����ѭ����䣬��1~100�е�����
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