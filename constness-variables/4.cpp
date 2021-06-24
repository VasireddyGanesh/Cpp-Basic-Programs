#include<iostream>
using namespace std;

int main()
{
	string name="ganesh";
	string* const n=&name; //constant pointer
	string clg="gvp";
//	n=&clg;
	cout<<name<<" "<<clg<<" "<<*n<<endl;
	return 0;
}
