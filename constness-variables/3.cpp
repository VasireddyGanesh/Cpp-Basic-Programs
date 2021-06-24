#include<iostream>
using namespace std;

int main()
{
	string name="ganesh";
	const string* n=&name;	//constant data(pointee)
//	n[0]='s';
	string clg="gvp";
	n=&clg;
//	n[1]='l';
	cout<<name<<" "<<clg<<" "<<*n<<endl;
	return 0;
}
