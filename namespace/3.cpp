#include<iostream>

using namespace std;

namespace MyNamespace {
	int data=10;	
}

namespace second{
		int data=20;
		int sec=30;
}
using namespace MyNamespace;
using second::sec;
int main()
{
	cout<<data<<endl;
	cout<<sec<<endl;
	return 0;
}
