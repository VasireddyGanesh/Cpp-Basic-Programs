#include<iostream>
using namespace std;

class demo{
	public:
		demo(){
			cout<<"Default Constructor"<<endl;
		}
};

int main(){
	demo* n=new demo[5];
	return 0;
}
