#include<iostream>
using namespace std;
int main()
{
    int a=10;
    cout<< "prefix increment " << ++a ;
    a=10;
    cout<< "\npost fix increment is " << a++ ;
    a=10;
    cout<<"\nprefix decrement is "<< --a;
    a=10;
    cout <<"\npostfix decrement is " <<a--;
    return 0;
}