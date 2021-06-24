//overloading insertion operator
#include<iostream>
using namespace std;
class student
{
    private:
        int a1;
    public:
        int a2;
        char a3;
        student()
        {
            a1=10;
            a2=20;
            a3='A';
        }
        student (int x,int y,char z)
        {
            a1=x;
            a2=y;
            a3=z;

        }
        friend ostream&  operator << (ostream &out,const student & c1);
};

ostream &  operator<<(ostream & out,const student &c1)//if return type is void then chaining doesnt works
{
    out<<c1.a1<<"\n"<<c1.a2<<"\n"<<c1.a3<<endl;
    return out;
}

int main()
{
    student s1;
    student s2(100,200,'G');
    cout<<s1<<s2;
    return 0; 
}