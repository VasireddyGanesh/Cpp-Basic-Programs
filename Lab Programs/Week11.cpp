#include<iostream>
using namespace std;

void sort(int arr[],int arrLength)
{
    int j,temp;
    for(int i=0;i<arrLength-1;i++)
    {
        for(j=i,temp=arr[j+1];j>=0 && arr[j]>temp;j--) 
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }    
}


int main()
{
    int arrLength;
    cout<<"Enter no.of Elements"<<endl;
    cin>>arrLength;
    int arr[arrLength];
    cout<<"Enter The Elements of an Array "<<endl;
    for(int i=0;i<arrLength;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arrLength);
    cout<<"Elements after Sorting in Ascending Order"<<endl;
    for(int i=0;i<arrLength;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
