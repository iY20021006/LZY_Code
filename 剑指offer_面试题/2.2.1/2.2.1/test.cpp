#include <iostream>
using namespace std;

class A
{

	A(int a = 0)
		:_a(a)
	{}

	/*A(A temp) ���ڸ��ƹ��캯��������ʹ�ô�ֵ����
	*			�����ô�ֵ���ƹ��캯���ͻ��ڲ���������ֹ�ĵݹ����
	{
		_a = temp._a;
	}*/

	//��ȷд��
	A(const A& temp)
		:_a(temp._a)
	{}

private:
	int _a;
};


int main()
{


	return 0;
}