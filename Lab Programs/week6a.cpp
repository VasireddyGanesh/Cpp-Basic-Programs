#include<iostream>
using namespace std;

class Test{
	int ID;
	public:
		Test()
		{
			ID=rand();
		}
		int getID(){
			return ID;
		}
};

int main()
{
	Test obj;
	cout<<obj.getID()<<endl;
	return 0;	
}
