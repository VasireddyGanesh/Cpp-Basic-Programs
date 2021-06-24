#include<iostream>
using namespace std;
int main()
{
    float F,C;
    cout << "Enter temperature in celsius\n";
    cin >> C;
    F=(9.0/5.0*C) +32;
    cout <<"temperature in Farenheit is "<< F ;
    return 0;
}