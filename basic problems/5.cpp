//to find the lcm of two numbers
#include<iostream>
using namespace std ;
int main()
{
    int i,j,k,m,n;
    cout <<"Enter i and j\n";
    cin>> i>>j;
    for(k=1;;k++)
    {
       for(m=1;j*m<=i*k;m++)
       {
           if(i*k==j*m)
           {
               cout <<"lcm is "<<(i*k);
               goto label;
           }
       } 
    }
   label: return 0;
}