#include<iostream>
using namespace std;


int add(int num1,int num2){
	return num1+num2;
}
double add(double num1,double num2)
{
    return num1+num2;
}	

int main()
{
	int a,b;
	double c,d;
	cout<<"Enter Int Data Type values"<<endl;
	cin>>a>>b;
	cout<<add(a,b)<<endl;
	cout<<"Enter Float(or)Double Data Type Values"<<endl; 
	cin>>c>>d;
	cout<<add(c,d)<<endl;
	return 0;
}
