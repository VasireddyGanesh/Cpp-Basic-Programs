#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
        int a;
        string b;
    public:
       char ch;
       float f1;
       void introduce()
       {
           cout <<"hello world\n";
       }
    protected:
        string ch1;
        int i;   
};

int main()
{
    student s1;
    s1.introduce();
    s1.ch='A';
    cout<< s1.ch <<endl;
    student s2;
    s2.ch='b';
    cout <<s2.ch<<endl;
    return 0;
}