#include <iostream>
using namespace std;

typedef int DataType;

//��ķ����޶���
/*
	public	����		�������ⶼ���Է���
	protected	����		���ڿ��Է��ʣ����ⲻ���Է���	
	private		˽��		���ڿ��Է��ʣ����ⲻ���Է���
*/


class A
{
public:
	A(int _a =0)
	{
		a = _a;
	}
	void show();
	void Print1()
	{
		cout << a <<" "<< b << " "<<c << endl;
	}
	DataType a;
protected:
	//C++11������
	DataType b=20;
private:
	//C++11������
	DataType c=30;
};

//���������
//������г�Ա��������������
//�����ⶨ�����ڷ�������ǰ����	����::

//�������� �����ⶨ��
void A::show()
{
	cout << "SHOW " << endl;
}

//��Ĵ�С����
/*
	1.����ͽ��г�Ա�������ֻ࣬ռ1�ֽ�
		ֻռ1�ֽڵ�ԭ��Ψһ��ʶ�����Ķ���
	2."��Ա����"֮�ͣ���Ҫע���ڴ����
*/

class B
{
public:
	void PrintB()
	{
		cout << "B" << endl;
	}
};

class c
{};


/*
	thisָ��	
	1.thisָ������ ������*const ,���ڳ�Ա������ʹ��
	2.��Ա�������βε�һ����������thisָ���βΣ���Ҫ�û�����
*/

int main()
{
	A a=10;//���ʵ����
	a.Print1();//�β���ʽ	void Print1(this )
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(c) << endl;
	return 0;
}