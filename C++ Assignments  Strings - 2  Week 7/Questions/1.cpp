#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    string rev=str;
    reverse(str.begin(),str.end());
    cout<<rev<<str;
}