#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cout << "Enter three numbers\n" ;
    cin >> a>> b >>  c;
    a>b ? a>c ? cout <<"a is greater" : cout<<"c is greater" : b>c ? cout<< "b is greater" : cout <<"c is greater" ;
    return 0;
}