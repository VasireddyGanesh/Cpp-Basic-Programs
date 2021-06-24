//Multiple Inheritence 

#include<iostream>
using namespace std;

class X{
	public :
		int Xdata;
		X(){
			cout<<"X Class Constructor is called"<<endl;
		}
};

class Y{
	public :
		int Ydata;
		Y(){
			cout<<"Y Class Constructor is called"<<endl;
		}
};

class Z : public Y, public X{
	public :
		int Zdata;
		Z(){
			cout<<"Z Class Constructor is called"<<endl;
		}
};

int main()
{
	Z obj;
	obj.Xdata=10;
	obj.Ydata=20;
	obj.Zdata=30;
	cout<<"value in Xdata , Ydata and Zdata of obj is "<<obj.Xdata<<", "<<obj.Ydata<<" and "<<obj.Zdata<<endl;
	return 0;
}
