//order of intialization is order of data members in class

#include<iostream>
#include<cstring>
using namespace std;

class String{
	char *str;
	unsigned size;  //order of intialization is order of data members in class
//	char *str;
	public:
		String(char* str):size(m1(strlen(str))),str(m2(strdup(str))){
			cout<<"Constructed"<<endl;
		}
		~String(){
			cout<<"Distructed"<<endl;
			free(str);
		}
		unsigned m1(unsigned size)
		{
			cout<<"size is "<<size<<endl;
			return size;
		}
		char* m2(char *str)
		{
			cout<<"String is "<<str<<endl;
			return str;	
		}
};

int main()
{
	String s="Ganesh";
	return 0;
}
