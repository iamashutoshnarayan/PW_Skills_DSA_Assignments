#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    str=stoi(str);
    int temp=str[0];
    int max,sec_max;
    for(int i=1;i<=str.size();i++){
        if(temp<str[i]){
            max=str[i];
        }
    }
    for(int i=1;i<=str.size();i++){
        if(temp<str[i] && str[i]!=max){
            sec_max=str[i];
        }
    }
    cout<<"Second Largest Digit: "<<sec_max;
}