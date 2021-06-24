#include<iostream>

using namespace std;

 class Parent{
 	public:
 	virtual void  test()
 	{
 		cout<<"This is virtual Function"<<endl;
 	}
 };

 class Child : public Parent{
 	public:
 	void test()
 	{
 		cout<<"This is Child Function"<<endl;
 	}
 };

int main()
{
 	 Parent* p=new Child();
	 p->test();
	 return 0;	
}
