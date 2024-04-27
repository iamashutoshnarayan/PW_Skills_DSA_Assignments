#include<iostream>
using namespace std;
int main(){
    int m,n,arr[20][20];
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    cout<<"Enter the Elements:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int copy[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            copy[i][j]=arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(copy[i][j]==0){
                //set 0s at ith row
                for(int c=0;c<n;c++){
                    arr[i][c]=0;
                }
                //set 0s at jth col
                for(int r=0;r<m;r++){
                    arr[r][j]=0;
                }
            }
        }   
    }
    cout<<"The Desired Matrix:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}