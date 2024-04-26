#include<iostream>
using namespace std;
int main(){
    int m,i,j,max;
    cout<<"Enter the number of rows/columns: ";
    cin>>m;
    int arr[m][m];
    cout<<endl;
    //spiral
    int minr=0,minc=0;
    int maxr=m-1,maxc=m-1;
    int a=1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<a<<" ";
            a++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        cout<<endl;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<a<<" ";
            a++;
            
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        
        //left
        for(int j=maxc;j>=minc;j--){
            cout<<a<<" ";
            a++;
            if(a==7) cout<<endl;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        
        
        //top
        for(int i=maxr;i>=minr;i--){
            cout<<a<<" ";
            a++;
            if(a==6) cout<<endl;
        }
        minc++;
    }
}