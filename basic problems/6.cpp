#include<iostream>
using namespace std ;
int main()
{
    int a,b,i,j,n;
    cout <<"Enter a and b \n";
    cin >>a>>b;
    n=a>b? a:b;
    for(i=n;i>=0;i--)
    {
        if(a%i==0 && b%i==0)
        {
            cout <<"gcd is " <<i;
            break;
        }
    }
    return 0;
}