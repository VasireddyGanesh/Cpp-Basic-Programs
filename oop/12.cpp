// inheritence
#include<iostream>
using namespace std;
class A
{
    private:
        int a;
        string ch1;
    protected:
        string name1;
    public:
        string area;
        A()
        {
            a=10;
            ch1="ganesh\n";
            area="naiducolony\n";
        }
        void set()
        {
            a=10;
            ch1="ganesh\n";
            area="naiducolony\n";
            name1="technology\n";
        }
        void display()
        {
            cout << area <<"\n"<<ch1 <<"\n"<<a;
        }    
};


class B : public A
{
    private:
        string name;
    public:
        string area2;
        void print()
        {
            cout << area<<name1;
        }
};

int main()
{
    A a;
    B b;
    b.set();
    b.print();
    return 0;
}