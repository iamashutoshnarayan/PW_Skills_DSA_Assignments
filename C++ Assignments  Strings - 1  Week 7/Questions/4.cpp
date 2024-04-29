#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter string (length<10): ";
    getline(cin,str);
    int x=0;
    for(int i=0;i<str.length();i++){
        x*=10;
        x+=str[i]-48;
    }
    cout<<x;
}