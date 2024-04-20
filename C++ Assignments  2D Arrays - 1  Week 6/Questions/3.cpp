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
    int l1,r1,l2,r2;
    cout<<"l1: ";
    cin>>l1;
    cout<<"r1: ";
    cin>>r1;
    cout<<"l2: ";
    cin>>l2;
    cout<<"r2: ";
    cin>>r2;
    int sum=0;
    for(i=l1;i<l2+1;i++){
        for(j=r1;j<r2+1;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"Sum: "<<sum;
}