//����һ�����������ò�������в����������������
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