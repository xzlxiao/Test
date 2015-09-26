//
//  二分法搜索.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/4.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//

// 二分法
 //int List[n] = {1，2，3，4，5……，n}
 //元素从小到大排列
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int search(double*List, int n, int X);
    int n = 10;
    double List_1[10] = {2, 4, 6, 8 ,10, 12, 14, 16, 18, 20};
    int num;
    cout << "请输入要搜索的数字" << endl;
    cin >> num;
    int match = search(List_1,n, num);
    if (match == -1)
        cout << "no match" << endl;
    else
        cout << "math is No." << match << endl;
    return 0;
}

int search(double *List, int n, int X)
{
    int find = -1;  //定义一个变量，用以标志是否匹配
    int start = 0; //定义List的起始项
    int end = n - 1; //定义List的结束项
    cout << "end " << end << endl; // debug
    int Len = n; //定义List的大小
    int midle = -1; //定义midle项
    int cont = 1; //debug
    while (find != 1 && (end - start) > 1)
    {
        cout << "第" << cont << "轮" << endl; // debug
        //第一步：找到List的中间项midle
        cout << start << " " << end << endl; // debug
        Len = (end - start) + 1;
        cout << "Len " << Len << endl; // debug
        midle = (Len / 2) + start;
        cout << "midle " << midle << endl; // debug
        //将List[midle]与X比较
        if (List[midle] == X){ //如果List[midle] = X
            find = 1;
            cout << "find " << find << endl; // debug
        }
        else if (List[midle] > X){ //如果List[midle] > X
            end = midle; //将List区间变为start : midle
            cout << start << " " << end << endl; // debug
        }
        else if (List[midle] < X){
            start = midle;     //将List区间变为midle : end
            cout << start << " " << end << endl; // debug
        }
        cont++; // debug
    }
    if (find == 1)
        return midle + 1;
    else
        return find;
}
