#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int *p=new int(10);
	cout<<*p<<endl;
	delete p;
	int *r=(int*)malloc(sizeof(int));
	*r=20;
	cout<<*r<<endl;
	free(r);
	return 0;
}
