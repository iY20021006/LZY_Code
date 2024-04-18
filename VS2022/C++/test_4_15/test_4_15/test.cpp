                                                                                         
#include <iostream>
using namespace std;

 class A
 {
 public:
        A(int a = 0)
              :_a(a)
            {
                 cout << "A()" << endl;
          }
    
           ~A()
            {
                cout << "~A()" << endl;
            }
 private:
         int _a;
 };

 int main()
 {
    
       A a[5];
      return 0;
    }
