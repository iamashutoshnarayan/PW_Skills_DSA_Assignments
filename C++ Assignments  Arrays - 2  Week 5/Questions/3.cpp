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
    int temp=arr[0];
    bool flag=true;
    for(i=0;i<n;i++){
        if(temp<arr[i]){
            temp=arr[i];
            flag=true;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not Sorted";
    }
}