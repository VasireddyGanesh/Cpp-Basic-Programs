#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int *p=(int*)operator new(sizeof(int));
	*p=10;
	cout<<*p<<endl;
	operator delete(p);
	int *r=(int*)malloc(sizeof(int));
	*r=20;
	cout<<*r<<endl;
	free(r);
	return 0;
}
