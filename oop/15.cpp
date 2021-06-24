//overloading using friend functions
#include<iostream>
using namespace std;
class student
{
private:
    //int mark1;
public:
   int mark1;
    student(int x)
    {
        mark1=x;
       // mark2=y;
    }
    void display()
    {
        cout<<mark1<<endl;
    }
    friend student operator+(const student &c1,const student &c2);
};

student operator+(const student &c1,const student &c2)
{
    return student(c1.mark1+c2.mark1);
}

int main()
{
    student s1(10);
    student s2(20);
    student s3=s1+s2;
    s3.display();
    return 0;
}