#include<iostream>
#include<cstdlib>
using namespace std;

void* operator new[](size_t n)
{
	cout<<"Overloaded new Operator"<<endl;
	void *ptr=malloc(n);
	return ptr;
}

void operator delete[](void *ptr)
{
	cout<<"Overloaded delete Operator"<<endl;
	free(ptr);
}
int main()
{
	int *p=new int[5];
	for(int i=0;i<5;i++)
	{
	   p[i]=i;							
	}	
	for(int i=0;i<5;i++)
	{
	   cout<<p[i]<<" ";							
	}	
	delete []p;
	return 0;
}
