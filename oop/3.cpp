#include<iostream>
using namespace std;
class student
{
    private :
     static string ch1;
     int i;
     public :
     static string ch2;
      int i2;
      void print()
      {
          ch1="world";
          cout << ch1<<ch2<<endl;
      }  
};
string student::ch2="hello";//here the memory is created
string student :: ch1="ganesh ";
int main()
{
    student s1,s2;
    s1.print();
    student::ch2="ganesh";
    s2.ch2="hello";
    cout<<s1.ch2<<endl;
    cout<<student::ch2;
    return 0;
}