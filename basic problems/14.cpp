#include<iostream>
using namespace std;

class rectangle
{
    private:
    int l;
    int b;
    public:
    rectangle()//default constructor
    {
        l=3;
        b=5;
    }
    rectangle(int l1,int b1)
    {
        l=l1;
        b=b1;
    }
    int getl()
    {
        return l;
    }
    int getb(){
        return b;
    }
    int area()
    {
        return l*b;
    }
};
int main()
{
  rectangle r1(3,7);
  cout<< "area of "<<r1.getl()<<" and " << r1.getb() << " is "<< r1.area();
  return 0;
}