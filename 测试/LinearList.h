/*�ű����ƣ����Ա�*/
template <class LinearType, int MAXSIZE>
class LinearList
{
protected:
	LinearType data[MAXSIZE - 1];
	int len;
public:
	void Initiate()��	//���Ա��ʼ��
	int Length();		//�����Ա�ĳ���
	LinearType Get(int i);		//ȡ��Ԫ
	int* Search(LinearType X);	//��ֵ����
	int Insert(LinearType x, int i);	//�������
	int Deleted(int i);	//ɾ������
};