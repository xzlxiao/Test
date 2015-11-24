//定义共用体info，可以保存学生的年级或者学校的部门，然后根据用户输入的数据进行相应的输出
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
	stu2.department = "凯里一中";
	stu1.grade = 3;
	cout << stu1.grade << endl;
	cout << stu2.department << endl;
}