// Single Inheritence

#include<iostream>
using namespace std;

class Base{
	public:
		int Bdata;
		Base(){
			cout<<"Base Class Constructor called"<<endl;
		}
};

class Derived : public Base{
	public :
		int Ddata;
		Derived(){
			cout<<"Derived Class Constructor called"<<endl;
		}
};

int main(){
	Derived derivedObj;
	derivedObj.Bdata=10;
	derivedObj.Ddata=20;
	cout<<"value in Bdata and Ddata of derivedObj is "<<derivedObj.Bdata<<", "<<derivedObj.Ddata<<endl;
	return 0;                                              
}
