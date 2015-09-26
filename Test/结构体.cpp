//定义一个学生信息的结构，并对其进行初始化，最后输出结果。
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
	}stu2 = {"小梅", "女", 15};
	student stu1 = {"张三", "男", 19};
	cout << stu1.name << " " << stu1.sex << " " << stu1.age << endl;
	cout << stu2.name << " " << stu2.sex << " " << stu2.age << endl;
}