#include<iostream>
using namespace std;
int main(){
    int i,j,arr[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            arr[i][j]=10;
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}