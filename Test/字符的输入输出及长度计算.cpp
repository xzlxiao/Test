//利用cin和cout得到用户输入的字符串，在输出内容后输出长度
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char zf[10];
	cout << "请输入：" << endl;
	cin >> zf;
	cout << zf << "长度是：" << strlen(zf) << endl;
	return 0;
}