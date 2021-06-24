#include<iostream>
using namespace std;

//void fun(int x=10,int y)  error
//void fun(int x=10,int y=30);  error === redefination of default params

void fun(int x=10,int y=20)
{
	cout<<" x "<<x<<" y "<<y<<endl;
}

void foo(int x,double y=10);
void foo(int x=20,double y);
void foo(int x,double y){
	cout<<" x "<<x<<" y "<<y<<endl;
}


//void foo(int x=10,double y){
//	cout<<" x "<<x<<" y "<<y<<endl;
//}


//void foo(int x,double y=20){
//	cout<<" x "<<x<<" y "<<y<<endl; //dont redefine function
//}


int main()
{
	fun();
	fun(30);
	fun(40,50);
	foo();
	foo(10);
	return 0;
}
