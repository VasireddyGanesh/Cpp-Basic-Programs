#include<iostream>
using namespace std ;
int main()
{
    char ch;
    cin>> ch;
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        cout << "it is an alphabet \n";
    }
    else
    {
        cout <<"it  is not an alphabet\n";
    }
    return 0;
}