#include<iostream>
//#define square(x) x*x
#define square(x) (x)*(x)
using namespace std;

int main()
{
	int a=5;
	cout<<square(a)<<endl;
	cout<<square(a+1)<<endl;
	cout<<square(++a)<<endl;//No fixing macro for this
	return 0;
}
