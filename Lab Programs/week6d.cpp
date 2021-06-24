#include<iostream>
using namespace std;

class Demo{
	int *data;
	public:
		Demo(){
			cout<<"Constructor called"<<endl;
			data=new int(5) ;
		}
		~Demo(){
			cout<<"Distructor called"<<endl;
			delete data;
		}
};


int main()
{
	Demo d;
	return 0;
}
