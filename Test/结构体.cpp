//����һ��ѧ����Ϣ�Ľṹ����������г�ʼ���������������
#include<iostream>
#include<string>
using namespace std;
int main()
{
	struct student
	{
		string name;
		string sex;
		int age;
	}stu2 = {"С÷", "Ů", 15};
	student stu1 = {"����", "��", 19};
	cout << stu1.name << " " << stu1.sex << " " << stu1.age << endl;
	cout << stu2.name << " " << stu2.sex << " " << stu2.age << endl;
}