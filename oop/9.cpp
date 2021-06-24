//distractor program

#include<iostream>
using namespace std;
class student
{
    private:
       string name;
    public:
       string *area;
       int *age;
    student()
    {
        name="ganesh";
        area=new string("hello\n");
        age =new int(9);
    }
    student( string a, int b)
    {
        name="ganesh\n";
        area=new string;
        age=new int;
        *area=a;
        *age=b;
        
    }
    void display()
    {
        cout<< name << *area << *age <<endl;
    }
    ~student()
    {
        cout<<"deleted\n";
        delete area;
        delete age;
    }    
};
int main()
{
    
    student ganesh("naidu colony",25);
    student s1;
    s1.display();
    ganesh.display();
    return 0;
}