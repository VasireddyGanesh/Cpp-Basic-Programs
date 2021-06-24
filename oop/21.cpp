#include<iostream>
using namespace std;

class points{
	public :
	int x;
	int y;
	points()
	{
		
	}
	points(int x,int y):x(x),y(y)
	{
		cout<<"Points Constructed"<<endl;
	}
};



class rectangle{
	public :
	points TL;
	points BR;
//	rectangle(points TL,points BR):TL(TL),BR(BR)
//	{
//		cout<<"rectangle Constructed"<<endl;
//	}
	void Area()
	{
		cout<<abs(TL.x-BR.x)*abs(TL.y-BR.y)<<endl;
	}
};

int main()
{
	rectangle r={{6,4},{10,1}};
	r.Area();
	return 0;
}
