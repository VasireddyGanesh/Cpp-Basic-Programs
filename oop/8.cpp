//constructor overloading
#include<iostream>
using namespace std;
class student
{
    string name;
    public:
        int roll;
        int Class;
        // student()
        // {
        //     roll=1;
        //     class=10;
        // }
        student(int x=10,int y=12)//default constructor arguments
        {   
        roll=x;
        Class=y;
        }
        student(string ch)
        {
          name=ch;  
        }
        void print()
        {
            cout<<name;
        }
        void out()
        {
            cout<<roll<<Class<<endl;
        }
};

int main()
{
    student s1(9,12);
    s1.out();
    student s2("ganesh\n");
    s2.print();
    student s3;
    s3.out();
    return 0;
}