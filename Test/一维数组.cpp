//声明一个包含10个元素的一维数组，并对其进行初始化，最后输出结果
#include<iostream>
using namespace std;
int main()
{
	int sz[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i=0; i<10; i++)
	{
		cout << sz[i] << " ";
	}
	cout << endl;
	return 0;
}