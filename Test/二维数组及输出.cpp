//����һ������20��Ԫ�صĶ�ά���飨2��10�����������ʼ���������������
#include<iostream>
using namespace std;
int main()
{
	int bisz[2][10] = {{1,2,3,4,5,6,7,8,9,10},
	{11,12,13,14,15,16,17,18,19,20}};
		for (int i=0; i<2; i++)
		{
			for(int j=0; j<10; j++)
			{
				cout << bisz[i][j] << " ";
			}
			cout << endl;
		}
		return 0;
}