#include<iostream>
using namespace std;
int main(){
    int i,n,x,arr[100];
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements for array:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter x: ";
    cin>>x;
    int count=0;
    for(i=0;i<n;i++){
        if(arr[i]>x){
            count+=1;
        }
    }
    cout<<"The number of elements strictly greater than x: "<<count;
}