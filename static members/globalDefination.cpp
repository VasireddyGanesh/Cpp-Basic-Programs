#include<iostream>

using namespace std;

class A
{
	static int a;
	public : 	
	A()
	{
		
	}
};

int A::a=10;//cpp forbids non const static inclass intialization

int main()
{
	//cout<<A::a<<endl;
	return 0;
}
