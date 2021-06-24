#include<iostream>
using namespace std;

class A
{
    private :
        static int objCount;
        int inst;
    public :
        A(){
            increaseCount();
        }
        static void increaseCount()//cannot be declared as const
        {
            objCount++;
            //inst++;  cannot access 
        }
        static int getCount()
        {
            return objCount;
        }
};

int A::objCount=0;

int main()
{
    A a;
    A b;
    cout<<"Count is "<<A::getCount()<<endl;
    return 0;
}