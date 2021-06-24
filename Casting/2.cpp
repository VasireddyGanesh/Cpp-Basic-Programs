#include<iostream>
using namespace std;

class A{
	public:
	  int a;	
};

class B{
	  public:
	  double b;
};

int main()
{
	A obj1;
	B obj2;
	
	A *p=&obj1;
	B *q=&obj2;
	
//	obj1=obj2;
//  obj2=obj1;

//	obj1=(A)obj2;
//	obj2=(B)obj1;
	
	p=(A*)q;
	q=(B*)p;
	cout<<p->a<<" "<<q->b<<endl;
	return 0;
}
