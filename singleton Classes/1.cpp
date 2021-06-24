#include<iostream>

using namespace std;

class Singleton
{
    private :
        int inst;
        Singleton() : inst(10)
        {
            cout<<"Object Created"<<endl;
        }
        static Singleton* points;
    public :
        static Singleton& getObject()
        {
            if(!points)
            {
                points=new Singleton();
            }
            return *points;
        }
        int getinst()
        {
            return inst;
        }
};

Singleton* Singleton::points=NULL;

int main()
{
    Singleton s=(Singleton::getObject());
    cout<<s.getinst()<<endl;
    delete &(Singleton::getObject());
    return 0;
}