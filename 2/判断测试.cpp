//��x & 1 ? a : b, ��ʾ���ѡ��
#include <iostream>
using namespace std;

int main()
{
	char *szBY;
	szBY = 1&1?"��":"��";
	cout << szBY << endl;
	
	return 0;
}