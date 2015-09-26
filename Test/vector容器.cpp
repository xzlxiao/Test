//
//  vector容器.cpp
//  Test
//
//  Created by 肖镇龙 on 15/9/16.
//  Copyright (c) 2015年 肖镇龙. All rights reserved.
//
//  使用vector容器，实现数据的动态增加和删除，并输出中间结果

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
void disp(vector<int>&v)
{
    for (int i = 0; i <= v.size(); i++)
    {
        cout << v[i] <<  " ";
    }
    cout << endl;
}
int main()
{
    vector<int>vec(2,3);
    vector<int>::iterator pVec = vec.end();
    disp(vec);
    vec.insert(pVec, 3, 5);
    disp(vec);
    vec.erase(pVec);
    disp(vec);
    pVec--;
    vec.erase(pVec);
    disp(vec);
    return 0;
}
