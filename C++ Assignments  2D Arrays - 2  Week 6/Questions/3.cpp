#include<iostream>
using namespace std;
int main(){
    int n,arr[20][20];
    cout<<"Enter the number of rows/columns: ";
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The wave form is:"<<endl;
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
} 