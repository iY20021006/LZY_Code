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
	cout << "A �Ĵ�С�ǣ�" << sizeof(A) << endl;
	cout << "B �Ĵ�С�ǣ�" << sizeof(B) << endl;
	cout << "C �Ĵ�С�ǣ�" << sizeof(C) <<endl;

	return 0;
}