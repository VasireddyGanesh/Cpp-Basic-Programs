//when a function returns object ....then copy constructor argument must be const
#include<iostream>
using namespace std;
class test
{
    public:
      int s1;
      test()
      {
            cout<<"world\n";
      }
     test(const test &t)
     {
         s1=t.s1;
         cout<<"copy called\n"<<s1;
     }
     test(int x)
     {   s1=x;
        cout <<"hello  thank\n";
     }

};

test fun()
{
    cout <<"fun called\n";
    test t(10);
    return t;//compiler creates temp object here 
}

int main()
{
    test t1(5);
    test t2=fun();
   // t2=fun();
    return 0;
}