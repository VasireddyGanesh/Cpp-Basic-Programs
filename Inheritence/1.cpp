#include<iostream>
using namespace std;

class A{
	int a;
	protected:
		int b;
	public :
		int c;
		A()
		{
			cout<<"A class Constructed"<<endl;
		}
		A(int a,int b,int c):a(a),b(b),c(c){
			cout<<"A class Constructed"<<endl;
		}
		~A()
		{
			cout<<"A class Destructed"<<endl;
		}
};

class B{
	int d;
	public:
		B()
		{
			cout<<"B Class constructed"<<endl;
		}
		B(int d):d(d){
			cout<<"B Class constructed"<<endl;
		}
		~B()
		{
			cout<<"B class Destructed"<<endl;
		}
};

class D :private A{
	B data;
	public:
		D(int a,int b,int c):A(a,b,c),data(a)
		{
	//		data(a); only can be intialized in intilizers list
			cout<<"D class Constructed"<<endl;
		}
		~D()
		{
			cout<<"D class Destructed"<<endl;
		}
		void f()
		{
			cout<<b<<" "<<c<<endl;
		}
};

int main()
{
	D obj(10,20,30);
	obj.f();
	return 0;
}
