#include<iostream>
using namespace std;

template <class T>
class Base{
	public :
		T data;
		Base(){
			cout<<"Default Base Const"<<endl;
		}
		Base(T data){
			cout<<"Base Const"<<endl;
			this->data=data;
		}
};

template <class T2>
class Derived:public Base<T2>{
	public:
		T2 dt;
		Derived(T2 d){
			cout<<"Derived Const"<<endl;
			dt=d;
		}
};

int main(){
	Base<int> b(5);
	Derived<int> d(10);
	return 0;
}
