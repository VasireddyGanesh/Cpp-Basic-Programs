//input and outstreams overloading

#include<iostream>
using namespace std;
class student
{
    private:
        int a1;
    public:
        int a2;
        char a3;
        student(int x,int y,char z)
        {
            a1=x;
            a2=y;
            a3=z;
        }
    friend istream & operator >>(istream & in ,student &c1);
    friend ostream & operator <<(ostream & out,student &c2);
};

istream & operator >>(istream &in,student &c1)
{
    cout<<"enter ur member values\n";
    in>>c1.a1>>c1.a2>>c1.a3;
}

ostream & operator  <<(ostream & out,student &c2)
{
    out<<c2.a1<<"\n"<<c2.a2<<"\n"<<c2.a3<<endl;
}

int main()
{
    student s1(100,200,'g');
    cin>>s1;
    cout<<s1;
    return 0;
}
