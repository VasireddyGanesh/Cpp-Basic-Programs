//operator overloading

#include<iostream>
using namespace std ;
class person
{
    private:
        int i1;
    public:
        // int i1;
        int i2;
        person()
        {
            cout<<"calledfrom\n";
        }
        person(int x,int y)
        {
            cout<<"called\n";
            i1=x;
            i2=y;
        }
        // person(const person &tak)
        // {
        //     cout<<"called";
        //     i1=tak.i1;
        //     i2=tak.i2;
        // }
        person operator /(const person &ref)//just change the symbol
        {
            person ex;
            ex.i1=i1/ref.i1;
            ex.i2=i2/ref.i2;
            cout<<"after\n";
            return ex;
        }
        void display()
        {
            cout<<i1<<"\n"<<i2;
        }
};

int main()
{
    person p1(30,30);
    person p2(20,20);
    person p3;
    p3=p1/p2;
    p3.display();
    return 0;
}