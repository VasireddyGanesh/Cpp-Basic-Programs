#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    cout <<"Enter a and b and arthmetic symbol \n";
    cin >>a>> b>>ch;
    switch(ch)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;        
        case '%':
            cout<<a%b;
            break;
        case '/':
            cout<<a/b;
            break;    
    }
    return 0;
}