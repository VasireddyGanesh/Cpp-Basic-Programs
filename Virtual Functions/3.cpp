#include<iostream>
using namespace std;

class A{
	int data;
	public:
		A(){
			cout<<"A Constructed"<<endl;	
		}
		A(int data):data(data){
			cout<<"A Constructed"<<endl;
		}
		~A()
		{
			cout<<"A Destructed"<<endl;
		}
};

class B : public A{
	int *ptr;
	public:
		B()
		{
			cout<<"B Constructed"<<endl;
		}
		B(int a,int b):ptr(new int(a)),A(b){
			cout<<"B Constructed"<<endl;
		}
		~B()
		{
			cout<<"B Distructed"<<endl;
			delete ptr;
		}
};

int main()
{
	A* p=new A(5);
	A* q=new B(10,20);
	delete p;
	delete q;
	return 0;
}


