#include<iostream>
using namespace std;


int main()
{
	int a=0;
	int b=1;
	try
	{
		if(a==0)
				throw "division by zero";
		cout<<b/a<<endl;
	}catch(const char* msg)
	{
		cout<<msg<<endl;
	}
}
