#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the length of the string: ";
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
            count++;
        }
    }
    cout<<"Number of consonants in the given string is: "<<count;
}