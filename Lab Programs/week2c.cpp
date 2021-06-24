#include<iostream>
using namespace std;

class node{
	int data;
	public:
		node(int data=0){
			this->data=data;
		}
		void* operator new(size_t n)
		{
			cout<<"Overloaded new Operator"<<endl;
			void *ptr=malloc(n);
			return ptr;
		}
		void operator delete(void *ptr)
		{
			cout<<"Overloaded delete Operator"<<endl;
			free(ptr);
		}
};

int main()
{
	node *ptr=new node(10);
	delete ptr;
	return 0;
}
