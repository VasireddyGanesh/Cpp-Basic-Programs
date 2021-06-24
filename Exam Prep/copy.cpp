#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream in("input.txt");
	fstream out("output.txt");
	if(in.is_open()){
		string s;
		while(getline(in,s)){
			out<<s<<"\n";
		}
	}else{
		cout<<"Error"<<endl;
	}
	return 0;
}
