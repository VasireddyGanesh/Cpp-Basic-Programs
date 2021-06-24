#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "enter a and b values\n";
    cin >> a >>b ;
    a=a+b;
    b=a-b;
    a=a-b;
    cout <<"after swaping values are "<< a << " "<< b ;
    return 0;
}