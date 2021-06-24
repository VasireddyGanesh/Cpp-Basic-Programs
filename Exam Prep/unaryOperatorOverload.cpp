#include<iostream>
#include<cstdlib>
using namespace std;

template<typename T>
class Complex{
	public:
	T real;
	T img;
	Complex(){
		cout<<"Default Constructor"<<endl;
		this->real=0;
		this->img=0;
	}
	Complex(T real,T img){
		cout<<"Parameterized Constructor"<<endl;
		this->real=real;
		this->img=img;
	}
	Complex(const Complex& c){
		cout<<"Copy Constructor"<<endl;
		real=c.real;
		img=c.img;
	}
	Complex operator++(){
		cout<<"Preincrement Operator"<<endl;
		Complex temp;
		temp.img=++img;
		temp.real=++real;
		return temp;
	}
	Complex operator++(int);
	void display(){
		cout<<real<<" + "<<img<<"j"<<endl;
	}
	long operator&();
	Complex<T> operator+(const Complex& temp);
	~Complex(){
		cout<<"Distractor"<<endl;
	}
	Complex& operator=(const Complex &c){
		cout<<"Copy Assignment"<<endl;
		real=c.real;
		img=c.img;
		return *this;
	}
	Complex& fun(Complex &c){
		return c;
	}
};

void* operator new(size_t n){
		cout<<"Overloaded New Operator"<<endl;
		void *temp=malloc(n);
		return temp;
}

void operator delete(void *temp){
	cout<<"Overloaded Delete Operator"<<endl;
	free(temp);
}

template <typename T>
Complex<T> Complex<T>::operator++(int){
	cout<<"Post Increment Operator"<<endl;
	Complex temp;
	temp.real=real++;
	temp.img=img++;
	return temp;
}

template<typename T>
long Complex<T>::operator&(){
	cout<<"Overloaded Address Operator"<<endl;
	return 0;
}

template<typename T>
Complex<T> Complex<T>::operator+(const Complex& c){
	cout<<"Overloaded + Operator"<<endl;
	Complex<T> temp;
	temp.real=real+c.real;
	temp.img=img+c.img;
	return temp;
}

template<typename T>
ostream& operator <<(ostream &out,const Complex<T> &c){
	cout<<"Overloaded output Stream"<<endl;
	out<<c.real<<"+"<<c.img<<"j"<<endl;
	return out;
}

template<typename T>
istream& operator>>(istream &in,Complex<T> &c){
	cout<<"Overloaded input Stream"<<endl;
	in>>c.real>>c.img;
	return in;
}

int main(){
//	Complex<int> c;
//	Complex<int> c2(20,10);
//	Complex<int> c3=c2;
//	c=++c2;
//	c.display();
//	c=c2++;
//	c.display();
//	c2.display();
//	cout<<&c2<<endl;
//	Complex<int> * temp=new Complex<int>(10,20);
//	cout<<temp->real<<" "<<temp->img<<endl;
//	delete temp;
//	c=c2+c2;
//	c.display();
//	cout<<c2<<c<<endl;
//	cin>>c;
//	c.display();
	Complex<int> c;
	Complex<int> c2(20,10);
	c=c.fun(c2);
	c.display();
	return 0;
}


