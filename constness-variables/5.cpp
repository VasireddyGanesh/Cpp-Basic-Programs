#include<iostream>
using namespace std;

int main()
{
	string name="ganesh";
	const string* const n=&name;
//	n[0]='g';
	string clg="gvp";
//	n=&clg;
	cout<<name<<" "<<clg<<" "<<*n<<endl;
	return 0;
}
