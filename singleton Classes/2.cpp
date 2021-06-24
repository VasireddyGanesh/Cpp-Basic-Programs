#include<iostream>

using namespace std;

class A{
    private :
        A()
        {
            cout<<"Constructed"<<endl;
        }
        ~A()
        {
            cout<<"Destructed"<<endl;
        }
    public:
        static A getInstance()
        {
            static A a;
            return a;
        }
};

int main()
{
    A b=A::getInstance();
    return 0;
}