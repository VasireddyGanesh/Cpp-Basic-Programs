//week 13 I/O

#include<iomanip>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
	char ch;
	char *str;
	cout<<"Enter a character"<<endl;
	ch=cin.get();
	cout<<"Entered Character is ";
	cout.put(ch);
	cout<<""<<endl;
	fflush(stdin);
	cout<<"Enter a Sentence"<<endl;
	cin.getline(str,100);
	cout<<"Entered sentence is :";
	cout.write(str,strlen(str));
	fflush(stdin);
	int i=10;
	cout<<""<<endl;	
	cout<<setw(6)<<i<<endl;
	cout<<setw(6)<<setfill('#')<<i<<endl;
	double j=3.234567;
	cout<<"Value of j upto 2 digits after floating Point is "<<setprecision(3)<<j<<endl;
	return 0;
}
