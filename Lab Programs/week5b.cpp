#include<iostream>
using namespace std;

class node{
	int data;
	node* next;	
	node* prev;
	public:
		node(int data=0){
			this->data=data;
			this->next=NULL;
			this->prev=NULL;
		}
	friend class doubleLinked;
};

class doubleLinked{
	node *head;
	node *tail;
	public :	
	doubleLinked()
	{
		head=NULL;
		tail=NULL;
	}
	void insert(int ele);
	void deleteNode();
	void printList();
};


void doubleLinked::insert(int ele)
{
	node *newNode=new node(ele);
	if(head==NULL)
	{
		head=tail=newNode;
	}else
	{
	 	tail->next=newNode;
	 	newNode->prev=tail;
		tail=newNode;  	
	}
}

void doubleLinked::deleteNode(){
	if(tail==NULL || head==NULL)
	{
		cout<<"List is Empty"<<endl;
	}else{
		node* temp=tail;
		tail=tail->prev;
		if(tail!=NULL)
		{
			tail->next=NULL;
		}
		else{
			head=NULL;
		}
		delete temp;	
	}	
}

void doubleLinked::printList(){
	if(tail==NULL || head==NULL){
		cout<<"List is Empty"<<endl;
	}
	else{
		node* temp=head;
		while(temp!=NULL)
		{
		 cout<<temp->data<<endl;
		 temp=temp->next;
		}
	}
}

int main()
{
	doubleLinked s;
	int op,ele;
 	while(1)
 	{
 	 	cout<<"\t1.Insert"<<endl;
		cout<<"\t2.Delete End Node"<<endl;
		cout<<"\t3.Print List"<<endl;
		cout<<"\t4.Exit"<<endl;
		cout<<"Enter Your Option"<<endl;
		cin>>op;
		switch(op)
		{
		   case 1:
		   	cout<<"Enter integer to insert"<<endl;
		   	cin>>ele;
		    s.insert(ele);
		    break;
		   case 2:
		    s.deleteNode();
		    break;
	       case 3:
		    s.printList();
		    break;
		   case 4:
		    return 0; 
		   default:
		    cout<<"Please Enter Correct option"<<endl;								
	    }  	
	}
}


