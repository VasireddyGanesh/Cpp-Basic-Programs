#include<iostream>
using namespace std;

class A{
	public:
		void f(){
			cout<<"A::f"<<endl;
		}
		void g()
		{
			cout<<"A::g"<<endl;
		}
};

class B:public A{
	public:
		using A::f;// Inorder to avoid Method Hiding
		void f(int i){
			cout<<"B::f"<<endl;
		}
};

int main()
{
	A a;
	B b;
	b.f();
	b.f(2);
	return 0;
}
