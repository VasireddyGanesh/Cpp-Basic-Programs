#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream in("input.txt");
	if(!in.is_open()){
		cout<<"Error"<<endl;
	}else{
		while(!in.eof()){
//			char ch;
//			ch=in.get();
//			in.get(ch);
			string s;
			in>>s;
			cout<<s<<endl;
		}
	}
//	in.seekg(10,ios::cur);
//	string s;
//	if(in.is_open()){
//		cout<<"Opened"<<endl;
//		while(getline(in,s))
//		{
//			cout<<s;
//		}
//	}
//	in.close();
	return 0;
}
