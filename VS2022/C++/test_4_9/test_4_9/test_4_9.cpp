//#include <iostream>
//using namespace std;
//
//
//class sum
//{
//public:
//    sum() {
//        _sum += _i;
//        _i++;
//    }
//    static void Init()
//    {
//        _i = 1;
//        _sum = 0;
//    }
//    static int GetSum() {
//        //返回静态成员变量，返回类型加上static
//        return _sum;
//    }
//private:
//    static int _i;
//    static int _sum;//静态成员变量类内定义，类外声明
//};
//
//int sum::_i = 1;
//int sum::_sum = 0;
//
//class Solution {
//public:
//    int Sum_Solution(int n) {
//        // int ret = 1+n;
//        // return ret*n/2;
//        sum::Init();
//        sum* p = new sum[n];//实例化对象数组，调用数组大小次构造函数   
//        return sum::GetSum();
//    }
//};
//class date
//{
//public:
//    friend istream& operator>>(istream& ic, date& i);
//    //void f1()
//    //{
//    //    f2();
//
//    //}
//    ////静态成员函数不可以调用非静态成员函数
//    ////非静态成员函数可以调用静态成员函数
//
//    //static void f2()
//    //{
//    //    f1();
//    //  
//    //}
//    void print()
//    {
//        cout << _n << endl;
//    }
//
//private:
//     int _n;
//
//
//};
//
//
//istream& operator>>(istream& ic,  date& i)
//{
//    ic >> i._n;
//    return ic;
//}
//
//int main()
//{
//    date d;
//    date d1;
//    cin >> d>>d1;
//    d.print();
//    d1.print();
//    return 0;
//}

#include <iostream>
#include <vector>
using namespace std;

class Date
{

    friend istream& operator>>(istream& in, Date& d);
public:
    Date(int year = 0, int month = 1, int day = 1)
    {
        _year = year;
        _month = month;
        _day = day;
    }

    bool GetMonth()
    {
        int d = GetMonthDay(_month);
        if (d == _day)
            return true;
        else
            return false;
    }

    int _GetMonth()
    {
        return _month;
    }
    int _Getday()
    {
        return _day;
    }

    int GetMonthDay(int m)
    {
        vector<int>a;
        a = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

        int i = a[m];


        if (((_year % 4 == 0 && _year % 100 != 0) || (_year % 400 == 0)) && m == 2)
        {
            i++;
        }
        return i;
    }
private:
    int _year;
    int _month;
    int _day;
};


istream& operator>>(istream& in, Date& d)
{
    in >> d._year >> d._month >> d._day;
    return in;

}

int getday(int ret ,Date& d)
{
    
    int n = 0;
    while (ret)
    {
        n += d.GetMonthDay(ret);
        ret--;
    }
    return n;
}


int main() {

    int n = 0;
    Date d;
    cin >> d;
    int ret = d._GetMonth();

    if (d.GetMonth())
    {
       n= getday(ret,d);
    }
    else
    {
        --ret;
        n = getday(ret,d);
        int day = d._Getday();
        n += day;
    }
   
  
    cout << n << endl;

    return 0;
}