#include<iostream>
#include<cstdlib>
using namespace std;

void* operator new(size_t n)
{
	cout<<"Overloaded new Operator"<<endl;
	void *ptr=malloc(n);
	return ptr;
}

void operator delete(void *ptr)
{
	cout<<"Overloaded delete operator"<<endl;
	free(ptr);
}

int main()
{
	int *p=new int;
	*p=10;
	cout<<*p<<endl;
	delete p;
	return 0;
}
