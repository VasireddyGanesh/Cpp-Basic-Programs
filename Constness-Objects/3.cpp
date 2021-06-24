// Mutable data members

#include<iostream>
using namespace std;

class Maths{
    double PIE;
	public:
//	Maths()
//	{
//		cout<<"Constructed"<<endl;
//	}
	double getPie() const{
		return PIE;
	}	
};

int main()
{
	const Maths obj;
	cout<<obj.getPie()<<endl;
	return 0;
}
