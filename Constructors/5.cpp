#include<iostream>

using namespace std;

class test{
	public:
	    int mar;
		test()
		{
			cout<<"Default Constructor"<<endl;
		}
		test(int m):mar(m)
		{
			cout<<"Parameterised Constructor"<<endl;
		}
		test(const test &temp)
		{
			cout<<"Copy Constructor"<<endl;
			mar=temp.mar;
		}
		~test()
		{
			cout<<"Distractor"<<endl;
		}
		test f1(test temp)
		{
			cout<<"Called F1"<<endl;
			temp.mar=20;
			return temp;
		}
		void f2(test temp)
		{
			cout<<"Called F2"<<endl;
		}
};

int main()
{
	test obj1;
	obj1.mar=1;
	test obj2(2);
	test obj3(obj1);
	test obj4=obj1;
	obj3.f2(obj4);
	obj3=obj2.f1(obj2);
	cout<<"Distraction of Objects Starts here"<<endl;
	return 0;
}
