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
    int j=0,k=n-1;
    bool flag=false;
    while(j<k){
        if(arr[j]==arr[k]){
            flag=true;
            j++;
            k--;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}