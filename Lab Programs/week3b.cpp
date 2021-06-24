#include<iostream>
using namespace std;

class Student{
	char name[100];
	int age;
	char Branch[50];
	public :
		Student(){
			cout<<"Enter Student Name"<<endl;
			cin>>name;
			cout<<"Enter Student Age"<<endl;
			cin>>age;
			cout<<"Enter Student Branch"<<endl;
			cin>>Branch;
		}
		void Display();
};

inline void Student::Display(){
	cout<<"Name : "<<name<<"\nAge : "<<age<<"\nBranch : "<<Branch<<endl;
}

int main(){
	Student s;
	s.Display();
	return 0;
}
