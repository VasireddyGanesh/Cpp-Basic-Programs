//const objects

#include<iostream>
using namespace std;

class test {
		int mem1;
	public:
		int mem2;
		test(int mem1,int mem2):mem1(mem1),mem2(mem2) {
//		mem1=1;	//Must be initilized in intializers list
//		mem2=2;
			cout<<"Constructed"<<endl;
		}
		int getMem1() const {
			return mem1;
		}
		int getMem2() const {
			return mem2;
		}
//	void setMem1() const
//	{
//		mem1=5;				//error
//	}
};

int main() {
	const test obj1(1,2);
	cout<<obj1.getMem1()<<" "<<obj1.getMem2()<<endl;
	const test* const ptr=&obj1;
	cout<<ptr->getMem1()<<" "<<ptr->getMem2()<<endl;
	return 0;
}
