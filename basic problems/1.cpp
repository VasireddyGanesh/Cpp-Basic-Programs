#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character\n" ;
    cin >>ch;
    if(ch=='a' || ch=='A' ||ch=='e'||ch=='E' || ch=='i'|| ch=='I' ||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        cout<< "it is a vowel \n";
    }
    else
    {
        cout <<"it is a consonant" ;
    }
    return 0;
}