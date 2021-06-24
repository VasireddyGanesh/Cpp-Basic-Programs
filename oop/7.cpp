//incase of pointer data members copy consructor ,distructor ,and asignment operator must be user defined 
#include<iostream>
#include<cstring>
using namespace std;
class student
{
    public:
     char *ch1;
     int i1;
     student(char *ptr)
     {
         ch1=ptr;
         i1=10;
         cout<<ch1;
     }
      student(const student &ptr)
      {
            
            ch1=new char;
            strcpy(ch1,ptr.ch1);
            i1=ptr.i1;
      }
};

int main()
{
    char ch3='A';
    student s1(&ch3);
    cout<<s1.ch1<<s1.i1<<"hello \n";
    student s2=s1;
    cout<<s2.ch1<<s2.i1<<"\n";
    ch3='B';
    s1.i1=25;
    cout<<s2.ch1<<s2.i1<<"\n";
    cout<<s1.ch1<<s1.i1<<"hello \n";
    return 0;
}