#include<iostream>
using namespace std;

int main()
{
	int m=10;
	const int n=5;
	const int* p=&n;
//	n=6;
//	*p=7;
	p=&m;
//	*p=30;
	return 0;
}
