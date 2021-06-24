#include<iostream>
using namespace std ;
int main()
{
    int i,n,j,m=1;
    cin>>i>>j;
    for(n=0;n<j;n++)
    {
        m=m*i;
    }
    cout<<m;
    return 0;
}