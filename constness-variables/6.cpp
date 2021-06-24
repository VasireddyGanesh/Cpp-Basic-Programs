#include<iostream>
using namespace std;

int main()
{
	const string name="ganesh";//constant string data cannot be assigned to non const pointer
//	string* n=&name;
//	name="suresh";
	const string clg="gvp";
	const string* n=&clg;
	cout<<name<<" "<<clg<<" "<<*n<<endl;
	return 0;
}
