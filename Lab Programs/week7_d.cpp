//Hierarchical Inheritence.

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

class Z:public X{
		public :
		Z(){
			cout<<"Z Class Constructor is called"<<endl;
		}
};

int main()
{
	Z obj1;
	Y obj2;
	return 0;
}
