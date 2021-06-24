#include<iostream>
using namespace std;

int sum(int a=10,int b=20,int c=30){
	return a+b+c;
}

int main(){
	cout<<sum(1,2,3)<<endl;
	cout<<sum(1,2)<<endl;
	cout<<sum(1)<<endl;
	return 0;
}
