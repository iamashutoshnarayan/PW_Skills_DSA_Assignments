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
    int even_sums=0;
    int odd_sums=0;
    for(i=0;i<n;i++){
        if(i%2==0){
            even_sums+=arr[i];
        }
        else{
            odd_sums+=arr[i];
        }
    }
    int difference=even_sums-odd_sums;
    cout<<"The difference between the sum of elements at even indices to the sum of elements at odd indices: "<<difference;
}