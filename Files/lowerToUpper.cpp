#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	string str;
	ifstream inFile("input.txt");
	ofstream outFile("output.txt");
	while(!inFile.eof()){
		inFile>>str;
		for(int i=0;i<str.size();i++){
			str[i]=toupper(str[i]);
		}
		str=str+" ";
		cout<<str;
		outFile<<str;
	}
	inFile.close();
	outFile.close();
	return 0;
}
