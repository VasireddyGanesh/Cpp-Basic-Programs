#include<iostream>
using namespace std;

void fun(int x=10,int y=20)
{
	cout<<" x "<<x<<" y "<<y<<endl;
}


int main()
{
	fun();
	fun(30);
	fun(40,50);
	return 0;
}
