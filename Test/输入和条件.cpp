/*��дһ������Ҫ����Խ����û��������ֵ������ֵ����0ʱ��
�����>0��������ֵС��0ʱ�������<0��;����ֵ����0ʱ�������=0����*/
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