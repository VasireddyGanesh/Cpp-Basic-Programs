#include<iostream>
using namespace std;

inline int square(int x){
	   return x*x;
}

int main()
{
	int a=5;
	cout<<square(a)<<endl;
	cout<<square(a+1)<<endl;
	cout<<square(++a)<<endl;
	return 0;
}
