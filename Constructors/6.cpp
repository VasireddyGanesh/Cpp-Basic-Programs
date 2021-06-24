#include<iostream>

using namespace std;

class A{
	public :
		A()
		{
			cout<<"A constructed"<<endl;
		}
		~A()
		{
			cout<<"A distroyed"<<endl;
		}
};

int main()
{
	A a;
	A* b=new A();
	A* c=new A[2];
	delete b;//It is programmer's responsibility to call distructor incase of dynamic objects are created
		   		  //default Constructor wont be called by compiler	   		  
	delete []c;
	return 0;
}
