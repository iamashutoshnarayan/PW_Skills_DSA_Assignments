#include<iostream>
using namespace std;

int main() {
    int i, j, n, arr[100];
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements for array where each number is repeated twice and only one number is unique: " << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int unique = 0;
    for (i = 0; i < n; i++) {
        bool found = false;
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                found = true;
                break;
            }
        }
        if (found==false) {
            unique = arr[i];
            break;
        }
    }
    cout << "Unique Value: " << unique << endl;
    return 0;
}
