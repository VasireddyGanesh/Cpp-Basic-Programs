// Mutable data members

#include<iostream>
using namespace std;

class Maths{
	mutable double PIE;
	public:
	Maths()
	{
		cout<<"Constructed"<<endl;
	}
	void setPie() const
	{
		PIE=3.1456;
	}
	double getPie() const{
		return PIE;
	}	
};

int main()
{
	const Maths obj;
	obj.setPie();
	cout<<obj.getPie()<<endl;
	return 0;
}
