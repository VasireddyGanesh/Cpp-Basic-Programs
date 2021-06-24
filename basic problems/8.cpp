#include<iostream>
using namespace std ;
int main()
{
    int i,j,n,sum=0;
    cin >>i;
    for(j=0;i>0;j++)
    {
        n=i%10;
        i=i/10;
        sum=sum+n;
    }
    cout << sum;
    return 0;
}