//this is meant by copy omission


#include<iostream>
using namespace std;

class student
{
    public:
      student(const char* str="\0")
      {
          cout<<"constructor called\n";
      }
      student(const student &st)
      {
          cout<<"copyconstructor\n";
      }
};
int main()
{
  student s2="copy me";
  return 0;  
}