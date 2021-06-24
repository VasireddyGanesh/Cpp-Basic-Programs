#include<iostream>
using namespace std;

int main()
{
	string name="ganesh";
	string* n=&name;
	string clg="gvp";
	n=&clg;
	cout<<name<<" "<<clg<<" "<<*n<<endl;
	return 0;
}
