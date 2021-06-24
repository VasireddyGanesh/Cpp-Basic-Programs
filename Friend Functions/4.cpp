
#include<iostream>
using namespace std;

class B;
class A{
    private :
        int i;
    public :
        A(int i): i(i){

        }
    void display(const B &b)
    {
        cout<<i<<" And "<<b.j<<endl;
    }
};

class B{
    private :
        int j;
    public :
        B(int j): j(j){

        }
    friend void A::display(const B &b);
};

int main()
{
    B k(20);
    A a(10);
    a.display(k);
    return 0;
}

