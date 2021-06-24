#include<iostream>
using namespace std;

class A{
	public:
		int data;
};

class B:public A{
	public:
		int q;
};

int main()
{
	A a;
	a.data=10;
	B b;
	b.q=20;
	
	A* ptr1=&a;
	B* ptr2=&b;
	
	ptr1=&b;
	
	cout<<ptr1->data<<endl;
//	cout<<ptr1->q<endl;
	return 0;
}
