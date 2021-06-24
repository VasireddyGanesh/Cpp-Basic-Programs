#include<iostream>
using namespace std;

namespace MyNamespace{
	int myData=10;
	class Complex
	{
  	   int rel;
  	     int img;
  		   public :
  		     Complex(){

    }
    Complex(int x,int y):rel(x),img(y){

    }
    friend Complex operator+(Complex &a,Complex &b);
    void print()
    {
        cout<<rel<<" + i"<<img<<endl;
    }
};

  	Complex operator+(Complex &a,Complex &b)
   	{
     Complex  c;
     c.rel=a.rel+b.rel;
     c.img=a.img+b.img;
     return c;
	}
}


int main()
{
	cout<<MyNamespace::myData<<endl;
	MyNamespace::Complex a(2,10);
    MyNamespace::Complex b(3,20);
    MyNamespace::Complex c;
    c=a+b;
    c.print();
    return 0;
}
