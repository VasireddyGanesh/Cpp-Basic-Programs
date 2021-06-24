#include<iostream>
using namespace std;

class A{
	  int a;	
};

class B{
	  int b;
};

int main()
{
	int i=10;
	double d=2.05;
	double *ptr=&d;
	i=d;
	d=i;
//	i=ptr;
	i=(int)ptr; // Converted Address to int
	cout<<i<<" "<<d<<endl;
	return 0;
}
