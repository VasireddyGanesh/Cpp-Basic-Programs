#include<iostream>
using namespace std;
int check( int &ref)
{
    ref=30;
}
int main()
{
    int a=10;
    int &ref2=a;
    check(ref2);
    cout<<a<<endl;
    return 0;
}