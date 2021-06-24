#include<iostream>
using namespace std;

class A{
	public :
	void fun()
	{
		cout<<"A:: Fun method"<<endl;
	}
	virtual void gun()
	{
		cout<<"A:: Gun method "<<endl;
	}
};

class B:public A{
	public :
		void fun()
		{
			cout<<"B :: Fun method"<<endl;
		}
		virtual void gun()
		{
			cout<<"B:: Gun method"<<endl;
		}
};

int main()
{
	A a;
	B b;
	
	A* p=&a;
	p->fun();
	p->gun();
	
	A* q=&b;
	q->fun();
	q->gun();
	
	return 0;
	
}
