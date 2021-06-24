#include<iostream>
using namespace std;

class Employee{
	string name;
	int age;
	int ID;
	public:
		Employee(string name,int age,int ID){
			this->name=name;
			this->age=age;
			this->ID=ID;
		}
		void display(){
			cout<<"Name : "<<name<<"\nAge : "<<age<<"\nID : "<<ID<<endl;
		}
};

int main()
{
	string name;
	int age,ID;
	cin>>name;
	cin>>age>>ID;
	Employee emp(name,age,ID);
	emp.display();
	return 0;
}
