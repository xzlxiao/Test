//
//  ExternToExtern.cpp
//  
//
//  Created by 肖镇龙 on 15/8/23.
//
//  能否用一个全局变量为另一个全局变量赋值？

#include <stdio.h>
#include <iostream>
int Tmp_2 = 1;
int Tmp_3 = Tmp_2;
int main()
{
    static int Tmp_1 = 10;
    using namespace std;
    cout << "测试" << endl;
    cout << Tmp_1 << endl;
    void prind();
    prind();
    cout << Tmp_3;
    return 0;
}

void prind()
{
    using namespace std;
    static int Tmp_1 = 5;
    cout << Tmp_1 << endl ;
}
