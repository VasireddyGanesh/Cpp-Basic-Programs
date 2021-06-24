// reversing input using template stack

#include<iostream>
using namespace std;


template<class T>
class Stack{
	private:
		int size;
		T *stack;
		int top;
	public:
		Stack(int size):size(size),stack(new T[size]),top(-1)
		{
			cout<<"Stack Constructed"<<endl;
		}
		~Stack()
		{
			delete stack;
			cout<<"\nStack Distructed"<<endl;
		}
		void Push(T element)
		{
			stack[++top]=element;
		}
		void Pop()
		{
			--top;
		}
		bool isEmpty()
		{
			if(top==-1)
					   return true;
   			else
			   	return false;		   
		}
		T Peek()
		{
		  	return stack[top];		
		}		
};


int main()
{
	Stack<char> S(6);
	char *name="ganesh";
	for(int i=0;i<6;i++)
	{
		S.Push(name[i]);
	}
	while(!S.isEmpty())
	{
		cout<<S.Peek();
		S.Pop();
	}
	return 0;
}
