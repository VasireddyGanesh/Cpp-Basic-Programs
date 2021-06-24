//MultiLevel Inheritence

#include<iostream>
using namespace std;

class X{
	public :
		X(){
			cout<<"X Class Constructor is called"<<endl;
		}
};

class Y : public X{
	public :
		Y(){
			cout<<"Y Class Constructor is called"<<endl;
		}
};

class Z:public Y{
		public :
		Z(){
			cout<<"Z Class Constructor is called"<<endl;
		}
};

int main()
{
	Z obj;
	return 0;	
}
