//���干����info�����Ա���ѧ�����꼶����ѧУ�Ĳ��ţ�Ȼ������û���������ݽ�����Ӧ�����
#include<iostream>
#include<string>
using namespace std;
int main()
{
	union info
	{
		int grade;
		char department[20];
	};
	info stu2, stu1;
	stu2.department = "����һ��";
	stu1.grade = 3;
	cout << stu1.grade << endl;
	cout << stu2.department << endl;
}