#include<iostream>
using namespace std;

int& fun(int &x)
{
	int t=x;
	t++;
	return t;
}

int main()
{
	int a=10,b;
	b=fun(a);
	cout<<"a="<<a<<" b="<<b<<" &a="<<&a<<" &b="<<&b<<endl;
	fun(a)=3;
	cout<<"a="<<a<<" &a="<<&a<<endl;
	return 0;
}
