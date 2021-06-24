//last two digits of a number with more than 2 digits

#include<iostream>
using namespace std;
int main()
{
    int i,j=0,a;
    cout <<"Enter a greater than 2 digit number\n";
    cin>> a;
    j=a%10;
    i=a/10;
    a=i%10;
    cout <<"result is " << a<<j ;
    return 0;
}