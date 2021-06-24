#include<iostream>
using namespace std;

template <typename T>
void selectionSort(T arr[],int n){
	int min;
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i;j<n;j++){
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}
}


int main(){
	int n;
	cout<<"Enter No.of Elements"<<endl;
	cin>>n;
	float arr[n];
	cout<<"Enter the Elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionSort(arr,n);
	for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
	}
	return 0;
}
