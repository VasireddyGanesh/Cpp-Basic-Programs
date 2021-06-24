// Member function as friend function

#include<iostream>
using namespace std;

class B;
class A{
    private :
        int i;
    public :
        A(int i): i(i){

        }
    void display(const B &b);
};

class B{
    private :
        int j;
    public :
        B(int j): j(j){

        }
    friend void A::display(const B &b);
};

void A::display(const B &b)
{
cout<<i<<" And "<<b.j<<endl;//becareful with the position of this function.must be place after B class
}

int main()
{
    B k(20);
    A a(10);
    a.display(k);
    return 0;
}

