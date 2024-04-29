#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int i=0,j=str.size()-1;
    bool flag=false;
    while(i<=j){
        if(str[i]==str[j]){
            i++;
            j--;
            flag=true;
        }
        else{
            break;
            flag=false;
        }
    }
    if(flag==true){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }
}