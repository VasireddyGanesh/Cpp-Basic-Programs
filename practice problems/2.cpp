#include<iostream>
using namespace std;

void fun(int *&ptr1)//refrence to pointer
{
    ptr1=NULL;
}
int main()
{
    int a=10;
    int *ptr=&a;
    fun(ptr);
    cout<<"hello world\n";
    cout<<*ptr;//causes error
    return 0;
}