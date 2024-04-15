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
    int temp=1;
    for(i=0;i<n;i++){
        temp*=arr[i];
    }
    cout<<"The product of all the elements in the given array: "<<temp;
}