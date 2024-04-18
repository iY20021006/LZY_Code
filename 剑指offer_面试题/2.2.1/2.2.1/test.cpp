#include <iostream>
using namespace std;

class A
{

	A(int a = 0)
		:_a(a)
	{}

	/*A(A temp) 至于复制构造函数不可以使用传值调用
	*			若调用传值复制构造函数就会内部进行无休止的递归调用
	{
		_a = temp._a;
	}*/

	//正确写法
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