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


	static int GetN() //没有this指针
	{
		return n;
	}


private:
	int _a;
	static int n;//声明  属于类  须在外面定义
};


int A::n = 0;//定义

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