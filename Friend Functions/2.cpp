//friend to multiple classes

#include<iostream>
using namespace std;

class A;

class B{
    private :
        int j;
    public :
        B(int j): j(j){

        }
    friend void display(A a,B b);
};

class A{
    private :
        int i;
    public :
        A(int i): i(i){

        }
    friend void display(A a,B b);
};

void display(A a,B b)
{
            cout<<a.i<<" And "<<b.j<<endl;
}

int main()
{
    A a(10);
    B k(20);
    display(a,k);
    return 0;
}

