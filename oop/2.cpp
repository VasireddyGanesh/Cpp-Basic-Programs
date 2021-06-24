#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
        string ch1;
        int i;
    public:
        string ch2;
        void introduce()
        {
            cout<<"hello world\n";
        }    
        void introduce2();
} ;

   void student :: introduce2()
{
    ch1="goodmorning\n";
    cout<<ch1<<"helloworld2\n";
}

int main()
{
    student *s1= new student;
    s1->ch2="ganesh\n";
    cout<<s1->ch2;
    s1->introduce2();
    delete s1;
    return 0;
}