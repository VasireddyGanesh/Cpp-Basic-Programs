//Week 12 Files

#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ofstream fout;
	ifstream fin;
	string data;
	fin.open("source.txt");
	fout.open("destination.txt");
	if(fout && fin){
		while(getline(fin,data)){
			fout<<data;
		}
		cout<<"Copying of File Content is Finished"<<endl;
	}else{
		cout<<"Unable to open Files"<<endl;
	}
	fin.close();
	fout.close();
	return 0;
}
