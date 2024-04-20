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
    int max=INT8_MIN,idx_no;
    for(i=0;i<r;i++){
        int sum=0;
        for(j=0;j<c;j++){
            sum+=arr[i][j];  
        }
        if(sum>max){
            max=sum;
            idx_no=i;
        }
    }
    cout<<"The Row with maximum Sum is: "<<idx_no+1;
}