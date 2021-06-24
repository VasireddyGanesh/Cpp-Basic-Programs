#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
	int j,temp;
	for(int i=0;i<n-1;i++){
		for(j=i,temp=arr[i+1];temp<arr[j] && j>=0;j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
}

int main(){
	int n;
	cout<<"Enter No.of Elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the Elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	insertionSort(arr,n);
	for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
	}
	return 0;
}
