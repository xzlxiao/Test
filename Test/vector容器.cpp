//
//  vector����.cpp
//  Test
//
//  Created by Ф���� on 15/9/16.
//  Copyright (c) 2015�� Ф����. All rights reserved.
//
//  ʹ��vector������ʵ�����ݵĶ�̬���Ӻ�ɾ����������м���

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
void disp(vector<int>&v)
{
    for (unsigned int i = 0; i < v.size(); i++)  //v.size()��unsigned int����
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
	pVec = vec.erase(pVec);
    disp(vec);
    
	pVec = vec.erase(pVec);
    disp(vec);
    return 0;
}
