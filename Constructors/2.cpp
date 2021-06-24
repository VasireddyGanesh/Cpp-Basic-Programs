#include<iostream>
using namespace std;

class Complex{
	public:
		int rel;
		int img;
//		public:
//			Complex(int rel,int img):rel(rel),img(img)
//			{
//				cout<<"Constructed"<<endl;
//						  }   

	void print()
	{
		cout<<rel<<" + i"<<img<<endl;
			   }	   	
};


int main()
{
	//Complex c(1,2); Cant be called without parameterised Constructor
	Complex c={1,2};//can be called even without parameterised constructor but data members must be in public
	c.print();
	return 0;
}
