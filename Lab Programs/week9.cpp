//WEEK-9 Virtual Functions

#include<iostream>
using namespace std;

class Polygon{
	public:
		virtual void getSides(){
			cout<<"Number of sides in a polygon is 3 or More"<<endl;
		}
};

class Triangle : public Polygon{
	public :
		void getSides(){
			cout<<"Number of sides in a Triangle is 3"<<endl;
		}
};

class Square : public Polygon{
	public :
		void getSides(){
			cout<<"Number of sides in a Square is 4"<<endl;
		}
};

int main()
{
	Polygon *sh1=new Polygon();
	Polygon *sh2=new Triangle();
	Polygon *sh3=new Square();
	sh1->getSides();
	sh2->getSides();
	sh3->getSides();
	return 0;
}
