#include <iostream>
using namespace std;


class A
{
public:
	void Print()
	{
		cout << _a << endl;
	}
private:
	int _a;
	char _c;
	char _f;
	int _i;
	char _y;

};


class B
{
public:
	void Print()
	{
		cout << " hello C++" << endl;
	}
};


class C
{};


int main()
{
	cout << "A 的大小是：" << sizeof(A) << endl;
	cout << "B 的大小是：" << sizeof(B) << endl;
	cout << "C 的大小是：" << sizeof(C) <<endl;

	return 0;
}