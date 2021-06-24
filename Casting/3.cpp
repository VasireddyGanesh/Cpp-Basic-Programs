#include<iostream>
using namespace std;

class A{
	
};

class B:public A{
	
};

int main()
{
	A *pa=NULL;
	B *pb=NULL;
	void *pc=NULL;
	
	pa=pb;//Upcast
//	pb=pa;//DownCast
	
	pc=pa;
	
//	pa=pc;
	pa=(A*)pc;
	return 0;
}
