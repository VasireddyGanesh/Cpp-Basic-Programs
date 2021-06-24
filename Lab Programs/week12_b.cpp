//week 12(b)

#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	string data;
	ifstream fin;
	fin.open("doc.txt");
	if(fin){
		while(getline(fin,data)){
			cout<<data;
		}
	}else{
		cout<<"Unable to open File"<<endl;
	}
	fin.close();
	return 0;
}
