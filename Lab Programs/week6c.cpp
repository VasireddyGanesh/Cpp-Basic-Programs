#include<iostream>
using namespace std;

class Complex{
	int real;
	int imaginary;
	public:
		Complex(){
			cout<<"Enter real and imaginary part of Complex number"<<endl;
			cin>>real>>imaginary;	  	
		}
		Complex(int real,int imaginary){
			this->real=real;
			this->imaginary=imaginary;
		}
		Complex(const Complex &c){
			cout<<"Copy Constructor called"<<endl;
			real=c.real;
			imaginary=c.imaginary;		  	
		}
		void display()
		{
			cout<<real<<" + j"<<imaginary<<endl;
		}
};

int main()
{
	Complex a;
	cout<<"Object initialized by default Constructor "<<endl;
	a.display();
	Complex c(10,20);
	Complex d(c);
	cout<<"Object initialized by copy Constructor "<<endl;
	d.display();
	return 0;
}
