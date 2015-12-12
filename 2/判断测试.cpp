//用x & 1 ? a : b, 表示真假选择
#include <iostream>
using namespace std;

int main()
{
	char *szBY;
	szBY = 1&1?"真":"假";
	cout << szBY << endl;
	
	return 0;
}