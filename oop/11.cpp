//to demonstrate friend class

#include<iostream>
using namespace std;
class A{
    private:
      int a;
      public:
      A()
      {
          a=10;
      }
      friend class B;
};

class B
{
    private:
     int b;
     public:
     void showA(A &x)
     {
         cout<<x.a<<endl;
     }
};

int main()
{
    A a;
    B b;
    b.showA(a);
    return 0;
}