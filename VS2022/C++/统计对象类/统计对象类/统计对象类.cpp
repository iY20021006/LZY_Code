#include <iostream>
using namespace std;

class A
{
public:

	A(int a = 0)
	{
		++n;
	}
	A(const A& a)
	{
		++n;
	}


	static int GetN() //û��thisָ��
	{
		return n;
	}


private:
	int _a;
	static int n;//����  ������  �������涨��
};


int A::n = 0;//����

A fun1(A a)
{
	return a;
}

A fun2(A a)
{
	return a;
}

int main()
{

	A a;
	A a1;
	fun1(a1); 
	fun2(a);
	cout << a.GetN() << endl;
	cout << a1.GetN()<< endl;

	return 0;
}