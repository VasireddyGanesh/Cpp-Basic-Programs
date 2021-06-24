#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node *next;
		node(int data){
			this->data=data;
			next=NULL;	 	
		}
	friend void insert();
	friend void deleteNode();
	friend void printList();
}*head=NULL,*tail=NULL;

void insert(){
	int ele;
	cout<<"Enter Element to insert"<<endl;
	cin>>ele;
	node *newNode=new node(ele);
	if(head==NULL)
	{
		head=tail=newNode;
		newNode->next=NULL;
	}else
	{
	 	tail->next=newNode;
		tail=newNode;
		newNode->next=NULL;  	
	}
}

void deleteNode(){
	if(head==NULL)
	{
		cout<<"List is Empty"<<endl;
	}else{
		node* temp=head;
		node* temp2=head;
		while(temp->next!=NULL){
			temp2=temp;
			temp=temp->next;
		}
		if(head==temp){
		 	head=NULL;
        }else
		{
			temp2->next=NULL;
		}
	delete temp;
	}	
}

void printList(){
	if(head==NULL){
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
	int op;
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
		    insert();
		    break;
		   case 2:
		    deleteNode();
		    break;
	       case 3:
		    printList();
		    break;
		   case 4:
		    return 0; 
		   default:
		    cout<<"Please Enter Correct option"<<endl;								
	    }  	
	}
	
}
