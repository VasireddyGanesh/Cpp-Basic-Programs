#include<iostream>
using namespace std;
int main()
{
    int *ptr=NULL;
    cout<<*ptr;//derefrencing null pointer causes run time error
    cout<<"hello world\n";
    return 0;
}