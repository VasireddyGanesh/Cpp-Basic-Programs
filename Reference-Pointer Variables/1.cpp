#include<iostream>

using namespace std;
const int& fun(const int& x)
{
	cout<<"x="<<x<<" &x="<<&x<<endl;
	return x;
}
 int& f2( int& x)
{
	cout<<"x="<<x<<" &x="<<&x<<endl;
	return x;
}
int main()
{
	int a=10;
	int &b=a;
	cout<<"a="<<a<<" b="<<b<<" &a="<<&a<<" &b="<<&b<<endl;
	const int &r=15;	//reference to literal creates temperory variable	
	cout<<"r="<<r<<" &r="<<&r<<endl;
	const int &temp=fun(20);
	cout<<"temp="<<temp<<" &temp="<<&temp<<endl;
	f2(a)=5;
	cout<<"a="<<a<<" &a="<<&a<<endl;
	return 0;
}
