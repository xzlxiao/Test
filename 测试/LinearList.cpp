/*���Ա�LinearList��ʵ��*/
#include "LinearList.h"
#include <iostream>
using namespace std;
template<class LinearType, int MAXSIZE>
void LinearList<LinearType, MAXSIZE>::Initiate()
{
	len = 0;
}

template<class LinearType, int MAXSIZE>
int LinearList<LinearType, MAXSIZE>::Insert(LinearType x, int i)
{
	//�����Ա��i��Ԫ��֮ǰ����һ���µ�����Ԫ��x
	int j;
	if(len >= MAXSIZE)
	{
		cout << "overflow!" << endl;	//�������
		return 0;
	}
	else if((i < 1)||(i > len+1))
	{
		cout << "position is not correct!" << endl;
		return 0;
	}
	else
	{
		for(j = len; j >= i; j--)
		{
			data[j] = data[j-1];	//���ݺ���
		}
		data[i - 1] = x;	//����Ԫ��
		len++;				//��������1
		return 1;
	}
}

template<class LinearType, int MAXSIZE>
int LinearList<LinearType, MAXSIZE>::Deleted(int i)
{
	int j;
	if ((i<1)||(i>len))		//��ɾ��λ�ò��Ϸ�
	{
		cout << "position is not correct!" << endl;
		return 0;
	}
	else
	{
		for (j = i; j < len; j++)
		{
			data[j - 1] = data[j];	//Ԫ��ǰ��
		}
		len--;	//����1
		return 1;
	}
}

template<class LinearType, int MAXSIZE>
int* LinearList<LinearType, MAXSIZE>::Search(LinearType X)
{
	//����ֵΪx����������Ԫ�ص�λ��ֵ
	int j;
	int Got = 0;	//�ж��Ƿ���ƥ��Ԫ��
	LinearType mGot_tmp[len];	//����һ����ʱ��ά���飬����ƥ�����
	for (j = 0; j < len; j++)
	{
		if (data[j] == x)
		{
			mGot_tmp[Got] = j + 1;
			Got++;
		}
	}
	LinearType* mGot = new LinearType[Got];
	if (Got == 0)
	{
		cout << "no match" << endl;
		return mGot;
	}
	else
	{
		return mGot;
	}
}

template<class LinearType, int MAXSIZE>
LinearType LinearList<LinearType, MAXIZE>::Get(int i)
{
	//ȡ�õ�i��Ԫ��
	if ((i < 1)||(i > len))
	{
		cout << "position is not correct!" << endl;
		return NULL;
	}
	else
	{
		return data[i-1];
	}
}

template<class LinearType, int MAXSIZE>
int LinearList<LinearType, MAXSIZE>::Length()
{
	return len;
}