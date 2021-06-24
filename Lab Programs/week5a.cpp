#include<iostream>
using namespace std;

class node{
	int data;
	node* next;	
	public:
		node(int data=0){
			this->data=data;
		}
	friend class singleLinked;
};

class singleLinked{
	node *head;
	node *tail;
	public :	
	singleLinked()
	{
		head=NULL;
		tail=NULL;
	}
	void insert(int ele);
	void deleteNode();
	void printList();
};


void singleLinked::insert(int ele)
{
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

void singleLinked::deleteNode(){
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
		 	tail=NULL;
        }else
		{
			tail=temp2;
			temp2->next=NULL;
		}
	delete temp;
	}	
}

void singleLinked::printList(){
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
	singleLinked s;
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


