#include "LinearList.h"
#include <iostream>
using namespace std;
int main()
{
	LinearList<int, 100>list1;
	list1.Initiate();
	list1.Insert(10, 1);
	int n = list1.Length();
	cout << n << endl;
	return 0;
}