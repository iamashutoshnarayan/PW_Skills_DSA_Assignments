#include<iostream>
using namespace std;
int main(){
    int i,j,arr[3][3],brr[3][3];
    cout<<"Enter the elements for the first matrix:"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements for the second matrix:"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>brr[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr[i][j]+=brr[i][j];
        }
    }
    cout<<"The sum of the two matrix is:"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}