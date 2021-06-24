#include<iostream>
#include<cstdlib>
using namespace std;

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
	int *r=(int*)malloc(5*sizeof(int));
	for(int i=0;i<5;i++)
	{
	   r[i]=i;							
	}	
	for(int i=0;i<5;i++)
	{
	   cout<<r[i]<<" ";							
	}	
	free(r);
	return 0;
}
