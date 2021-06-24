#include<iostream>
using namespace std;

class student 
{
    private:
        // int a1;
    public:
     int a1;
     int a2;
      student(int x,int y)
      {
          a1=x;
          a2=y;
      }
      student operator -()
      {
          return student(-a1,-a2);
      }
      int getx()
      {
          return a1;
      }
      int gety()
      {
          return a2;
      }
};

int main()
{
    student s1(10,20);
    student s2=-s1;
    cout<<(s2).getx()<<"\n"<<s2.gety();
    return 0;
}