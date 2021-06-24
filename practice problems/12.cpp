#include<iostream>
using namespace std ;
int main()
{
    char ch;
    cout <<"Enter a character\n";
    cin >> ch;
    if(ch>=65 && ch<=90)
    {
        ch=ch+32;
    }
    else if(ch>=97 && ch<=122)
    {
        ch=ch-32;
    }
    cout<<"after conversion is " <<ch;
    return 0;
}