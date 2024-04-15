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
    bool flag;
    int duplicate=arr[0];
    for(j=0;j<n;j++){
        for(i=j;i<n;i++){
            if(arr[j]==arr[i]){
                flag=true;
            }
            else{
                flag=false;
            }
        }
    }
    if(flag==true){
        cout<<"The given array contains duplicates";
    }
    else{
        cout<<"The given array has no duplicates";
    }
}