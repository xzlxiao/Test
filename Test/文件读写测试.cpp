#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	ofstream ofile;
	ofile.open("test.dat", ios_base::binary|ios_base::app);
	ofile.write("测试文件写入", 100);
	ofile.write("测试文件写入", 100);
	ofile.close();
	ifstream ifile;
	ifile.open("test.dat", ios_base::binary|ios_base::in);
	ifile.seekg(0, ios::beg);
	char a[100];
	ifile.read(a,100);
	cout << a << endl;
	cout << ifile.tellg() << endl;
	ifile.read(a,100);
	cout << a << endl;
	cout << ifile.tellg() << endl;
	ifile.close();
	return 0;
	
}
