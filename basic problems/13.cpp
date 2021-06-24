#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;
    public:
    void set(int length1,int breadth1)
    {
        length=length1;
        breadth=breadth1;
    }
    int area()
    {
        return length * breadth;
    }
};

int main()
{
    rectangle r1;
    int a,length=3,breadth=4;
    r1.set(length,breadth);
    a=r1.area();
    cout <<"area is " <<a;
    return 0;
}