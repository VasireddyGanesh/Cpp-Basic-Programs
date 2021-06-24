#include<iostream>
using namespace std;

class Student{
	protected:
	string name;
	int age;
	string collegeName;
	string course;
	public:
		Student(){
			cout<<"Enter Student Name"<<endl;
			cin>>name;
			cout<<"Enter Age"<<endl;
			cin>>age;
		}
		virtual void getStudentData()=0;
};

class Engineering : public Student{
	public:
		Engineering(){
			course="Engineering";
			cout<<"Enter Student College Name"<<endl;
			cin>>collegeName;
		}
		void getStudentData(){
			cout<<"\tStudent Details"<<endl;
			cout<<"\tName : "<<name<<endl;
			cout<<"\tAge : "<<age<<endl;
			cout<<"\tCollege : "<<collegeName<<endl;
			cout<<"\tCourse : "<<course<<endl;
		}
};

class Science : public Student{
	  public :
	  	Science(){
	  		course="Science";
	  		cout<<"Enter Student College Name"<<endl;
			cin>>collegeName;
	    }
		void getStudentData(){
			cout<<"\tStudent Details"<<endl;
			cout<<"\tName : "<<name<<endl;
			cout<<"\tAge : "<<age<<endl;
			cout<<"\tCollege : "<<collegeName<<endl;
			cout<<"\tCourse : "<<course<<endl;
		}
};

class Medical : public Student{
	   public :
	   	Medical(){
	   		course="Medical";
	   		cout<<"Enter Student College Name"<<endl;
			cin>>collegeName;
		}
		void getStudentData(){
			cout<<"\tStudent Details"<<endl;
			cout<<"\tName : "<<name<<endl;
			cout<<"\tAge : "<<age<<endl;
			cout<<"\tCollege : "<<collegeName<<endl;
			cout<<"\tCourse : "<<course<<endl;
		}
};

int main()
{
	Student *st1=new Engineering();
	Student *st2=new Medical();	
	Student *st3=new Science();
	st1->getStudentData();
	st2->getStudentData();
	st3->getStudentData(); 
	return 0;
}
