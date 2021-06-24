#include<iostream>
using namespace std;

template<class A>
class Stack{
	A *stack;
	int top;
	int size;
	public:
		Stack(int size)
		{
			this->size=size;
			stack=new A[size];
			top=-1;
		}
	void push(A element);
	A peek();
	A pop();
	void display();
	bool isEmpty();	
};

template<class A>
void Stack<A>::push(A element)
{
	if(top==size-1)
	{
		cout<<"Stack Overflow"<<endl;
	}else
	{
		stack[++top]=element;
	}
}

template<class A>
A Stack<A>::peek()
{
	if(top==-1)
	{
		cout<<"Stack Uderflow"<<endl;
		return 0;
	}else
	{
		return stack[top];
	}
}

template<class A>
A Stack<A>::pop()
{
	if(top==-1)
	{
		cout<<"Stack is Empty"<<endl;
		return 0;
	}else{
		return stack[top--];
	}
}

template<class A>
void Stack<A>::display()
{
	if(top==-1)
	{
		cout<<"Stack is Empty"<<endl;
	}else{
		int i=top;
		while(i!=-1)
		{
			cout<<stack[i]<<endl;
			i--;
		}
	}
}

template<class A>
bool Stack<A>::isEmpty()
{
	if(top==-1)
	{
		return true;
	}else{
		return false;
	}
}

int main()
{
	Stack<string>* obj=new Stack<string>(5);
	int operation;
	string element;
        while(1){
            cout<<"\nChoose Operation\n";
            cout<<"\n\t1. Push\n";
            cout<<"\n\t2. Pop\n";
            cout<<"\n\t3. isEmpty\n";
            cout<<"\n\t4. peek\n";
            cout<<"\n\t5. display\n";
            cout<<"\n\t6. exit\n";
            cin>>operation;
            switch(operation){
                case 1:
                    cout<<"\nEnter element to be pushed\n";
                    cin>>element;
                    obj->push(element);
                    break;
                case 2:
                    cout<<obj->pop()<<endl;
                    break;
                case 3:
		    	    cout<<obj->isEmpty()<<endl;
			        break;
                case 4:
				    cout<<obj->peek()<<endl;
				    break;
                case 5:
                    obj->display();
				    break;
	            case 6:
                    return 0;
                default:
                    cout<<"\n Please choose proper choice";
            }
        }
}
