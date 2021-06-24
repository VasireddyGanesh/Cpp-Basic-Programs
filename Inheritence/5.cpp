#include<iostream>
using namespace std;
class Engine{
	int cyclinders;
	public:
		Engine(int c):cyclinders(c){
			cout<<"Engine Constructed"<<endl;
		}
		void Start()
		{
			cout<<"Started"<<endl;
		}
};

class Car:private Engine{
		public:
			Car():Engine(8){
				cout<<"Car constructed"<<endl;	   	
			}
			using Engine::Start;
};

int main()
{
	Car c;
	c.Start();
	return 0;
}
