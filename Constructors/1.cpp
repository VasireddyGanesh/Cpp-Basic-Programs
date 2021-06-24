#include<iostream>

using namespace std;

class A{
	public :
		A(){
			cout<<"A constructed"<<endl;
		}
		A(const A& temp)
		{
		   cout<<"A Copy Constructor"<<endl;		
		}	
		A& operator=(const A& temp)
		{
			cout<<"A Copy Assignment"<<endl;
			return *this;
		}
		~A()
		{
			cout<<"A distructed"<<endl;
		}
};

class B{
	A a;
	public :
	B(A &temp):a(temp)
	{
		cout<<"B constructor called"<<endl;
//		a=temp;
		cout<<"B constructor ended"<<endl;
	}	
};

int main()
{
	A a;
	B b(a);
	return 0;
}
