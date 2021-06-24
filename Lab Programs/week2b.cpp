#include<iostream>
using namespace std;

class Int{
	int data;
	public:
		Int(int data=0){
			this->data=data;
		}
		Int operator++(){
			Int temp;
			temp.data=++data;
			return temp;
		}
		Int operator++(int){
			Int temp;
			temp.data=data++;
			return temp;
		}
		void display()
		{
			cout<<this->data<<endl;
		}
};

int main()
{
	int a;
	cout<<"Enter an integer value"<<endl;
	cin>>a;
	Int obj1(a);
	Int obj2=++obj1;
	cout<<"Obj1 data :"<<endl;
	obj1.display();
	cout<<"Obj2 data :"<<endl;
	obj2.display();
	obj2=obj1++;
	cout<<"Obj1 data :"<<endl;
	obj1.display();
	cout<<"Obj2 data :"<<endl;
	obj2.display();
	return 0;
}
