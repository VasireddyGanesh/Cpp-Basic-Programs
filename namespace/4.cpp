#include<iostream>

using namespace std;

namespace NM{
	int data=10;
}

int data=20;

int main()
{
	using NM::data; //hides global data
	cout<<::data<<endl;
	cout<<NM::data<<endl;
	cout<<data;
	return 0;
}
