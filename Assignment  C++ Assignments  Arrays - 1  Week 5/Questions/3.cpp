#include<iostream>
using namespace std;
int main(){
    int i,j,n,arr[100];
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements for array:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The minimum value out of all elements in the array: "<<min;
}