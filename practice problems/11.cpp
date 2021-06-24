#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout <<"Enter the number and the range\n";
    cin >>a >> b >>c;
    if(a>b && a<c)
    {
        cout<< "it is in between the range\n";
    }
    else
    {
        cout<<"number is out of range\n";
    }
    return 0;
}