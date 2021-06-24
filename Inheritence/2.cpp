#include<iostream>
using namespace std;


class person{
	public:
		person()
		{
			cout<<"person Constructed"<<endl;
		}
};

class Student:public person{
	public :
		Student()
		{
			cout<<"Student Constructed"<<endl;
		}
};

void eat(person &p)
{
	cout<<"Eating"<<endl;
}

void study(Student &s)
{
	cout<<"Studying"<<endl;
}

int main()
{
	Student stud;
	person pers;
	eat(stud);
//	study(pers);child reference cannot hold parent object 
	study(stud);
	return 0;
}
