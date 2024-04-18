#include <iostream>
using namespace std;

typedef int DataType;

//类的访问限定符
/*
	public	公共		类内类外都可以访问
	protected	保护		类内可以访问，类外不可以访问	
	private		私有		类内可以访问，类外不可以访问
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
	//C++11新特性
	DataType b=20;
private:
	//C++11新特性
	DataType c=30;
};

//类的作用域
//类的所有成员的作用域都在类中
//若类外定义需在返回类型前加上	类名::

//类内声明 ，类外定义
void A::show()
{
	cout << "SHOW " << endl;
}

//类的大小计算
/*
	1.空类和仅有成员函数的类，只占1字节
		只占1字节的原因：唯一标识这个类的对象
	2."成员变量"之和，需要注意内存对齐
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
	this指针	
	1.this指针类型 类类型*const ,仅在成员函数中使用
	2.成员函数的形参第一个是隐含的this指针形参，不要用户传递
*/

int main()
{
	A a=10;//类的实例化
	a.Print1();//形参形式	void Print1(this )
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(c) << endl;
	return 0;
}