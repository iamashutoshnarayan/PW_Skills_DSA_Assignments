#include<iostream>
using namespace std;
int main(){
    int i,j,arr[20][20],r,c;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int max=INT8_MIN;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"The largest element of a given 2D array of integers: "<<max;
}