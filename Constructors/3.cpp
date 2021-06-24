// Copy Constructor to test deep and shallow Copy
// Copy Assignment opeartor function to test deep and shollow Copy

#include<iostream>
#include<cstring>
using namespace std;

class String{
	public:
		char *str;
		int size; 
		String(char* str):size(strlen(str)),str(strdup(str)){
			cout<<"Parameterised Constructed"<<endl;
		}
		~String(){
			cout<<"Distructed"<<endl;
			free(str);
		}
		String(const String &s) :str(strdup(s.str)),size(strlen(s.str))
		{
			cout<<"Copy Constructor"<<endl;
		}
		String& operator=(const String& temp)
		{
			if(this!=&temp)
			{
				free(str);
				this->str=strdup(temp.str);
				this->size=strlen(temp.str);
			}
			return *this;
		}
		void print()
		{
			cout<<"String is "<<str<<endl;
		}
};

int main()
{
	String s="ganesh";
	String s2(s);
	s.print(),s2.print();
	s.str="changed";
	s.print(),s2.print();
	cout<<"Copy Assignment Opeartor"<<endl;
	s=s2;
	s.print(),s2.print();
	s.str="changed";
	s.print(),s2.print();
	return 0;
}
