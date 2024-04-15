#include<iostream>
using namespace std;
int main(){
    int i,j,n,arr[100];
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements for the sorted array(only positive elements):"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest=arr[0];
    for(i=0;i<n;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    cout<<"The smallest missing positive element in the sorted Array that contains only positive elements: "<<smallest;
}