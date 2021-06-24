//Namespaces can be nested

#include<iostream>
using namespace std;

namespace MyNamespace {
	int data=10;
	namespace second{
		int data=20;
	}
}

int main()
{
	cout<<MyNamespace::data<<endl;
	cout<<MyNamespace::second::data<<endl;
	return 0;
}
