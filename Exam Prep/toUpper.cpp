#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream in("input.txt");
	if(in.is_open()){
		while(!in.eof()){
			char ch;
			ch=in.get();
			if(ch<=122 && ch>=97){
				ch=ch-32;
			}
			cout<<ch;
		}
	}else{
		cout<<"error"<<endl;
	}
	return 0;
}
