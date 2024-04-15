#include<iostream>
using namespace std;
int main(){
    int i,j,n,arr[100];
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements for array:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int sec_max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            sec_max = max;
            max = arr[i];
        } 
        else if (arr[i] > sec_max && arr[i] != max) {
            sec_max = arr[i];
        }
    }
    if (sec_max == max) {
        cout << "There is no distinct second largest element" << endl;
    } 
    else {
        cout << "Second largest element: " << sec_max << endl;
    }
}