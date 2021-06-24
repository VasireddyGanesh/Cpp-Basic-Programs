#include<iostream>
using namespace std;

class Complex{
	int real;
	int imaginary;
	public:
		Complex(int real=0,int imaginary=0){
			this->real=real;
			this->imaginary=imaginary;
		}
		Complex operator+(const Complex &c){
			Complex temp;
			temp.real=real+c.real;
			temp.imaginary=imaginary+c.imaginary;
			return temp;
		}
		void display()
		{
			cout<<real<<" + j"<<imaginary<<endl;
		}
};

int main()
{
	int r1,r2,img1,img2;
	cout<<"Enter real part of Complex Number"<<endl;
	cin>>r1;
	cout<<"Enter Imaginary part of Complex Number"<<endl;
	cin>>img1;
	Complex c(r1,img1);
	cout<<"Enter real part of Complex Number"<<endl;
	cin>>r2;
	cout<<"Enter Imaginary part of Complex Number"<<endl;
	cin>>img2;
	Complex d(r2,img2);
	c=c+d;
	c.display();
	return 0;
}
