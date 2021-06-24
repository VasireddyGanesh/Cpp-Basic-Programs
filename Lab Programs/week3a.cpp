#include<iostream>
using namespace std;

class Complex{
	int real;
	int img;
	public:
		Complex(int real=0,int img=0)
		{
			this->real=real;
			this->img=img;
		}
		friend istream& operator>>(istream &in,Complex &c);
		friend ostream& operator<<(ostream &os,Complex &c);
};

istream& operator>>(istream &in,Complex &c){
        cout<<"Enter real part of Complex Number"<<endl;
		in>>c.real>>c.img;
//		cout<<"Enter Imaginary part of Complex Number"<<endl;
//        in>>c.img;
		return in;
}

ostream& operator<<(ostream &os,Complex &c){
	os<<c.real<<" + j"<<c.img;
	return os;
}

int main()
{
	Complex c;
	cin>>c;
	cout<<c;
}
