#include<iostream>
using namespace std;

class myClass{
	static int count;
	public:
		myClass(){
			increment();
		}
		static void increment(){
			++count;
		}
		static int getCount(){
			return count;
		}
};

int myClass::count=0;

int main(){
	myClass obj1,obj2;
	cout<<myClass::getCount();
	return 0;
}
