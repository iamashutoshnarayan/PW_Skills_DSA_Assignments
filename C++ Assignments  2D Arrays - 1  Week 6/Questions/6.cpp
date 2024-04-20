#include<iostream>
using namespace std;
int main(){
    int i,j,arr[20][20],n;
    cout<<"Enter the odd number of rows/columns: ";
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==n/2 || j==n/2){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}