#include<iostream>
using namespace std ;
int main()
{
    int i,j;
    cin>> i;
    for(j=0;i>0;j++)
    {
        i=i/10;
    }
    cout << j;
    return 0; 
}