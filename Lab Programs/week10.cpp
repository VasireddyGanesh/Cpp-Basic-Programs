//Week-10 Virtual Base Class

#include<iostream>
using namespace std;

class W{
	public:
		void getClassName(){
			cout<<"Class of type 'A'"<<endl;
		}
};

class X: virtual public W{
	
};

class Y: virtual public W{
	
};

class Z: public X,public Y{
	
};

int main(){
	Z obj;
	obj.getClassName();
	return 0;
}
