//constructor types
#include<iostream>
using namespace std;
class student
{
    private :
     int i;
     char ch1;
     public:
      student()//default constructor
      {
          i=5;ch1='A';
      }
      student(int x,char y)//parameterised constructor
      {
          i=x;ch1=y;
      }
      student(const student &ref)//copy constructor
      {
          i=ref.i;
          ch1=ref.ch1;
      }
      void print()
      {
          cout<<i<<"\n"<<ch1<<endl;
      }
};

int main()
{
    student s1;
    s1.print();
    student s2(10,'B');
    s2.print();
    student s3;
    s3=student(25,'C');//this is an explict way of calling
    s3.print();
    student s4=s3;
    s4.print();
    return 0;
}