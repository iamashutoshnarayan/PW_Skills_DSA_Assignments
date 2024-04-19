#include<iostream>
#include <climits>
using namespace std;

int main() {
    int i, n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements for array:" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int lrgst = INT_MIN, sec_lrgst = INT_MIN, thrd_lrgst = INT_MIN;
    for (i = 0; i < n; i++) {
        if (arr[i] > lrgst) {
            thrd_lrgst = sec_lrgst;
            sec_lrgst = lrgst;
            lrgst = arr[i];
        } else if (arr[i] > sec_lrgst && arr[i] != lrgst) {
            thrd_lrgst = sec_lrgst;
            sec_lrgst = arr[i];
        } else if (arr[i] > thrd_lrgst && arr[i] != lrgst && arr[i] != sec_lrgst) {
            thrd_lrgst = arr[i];
        }
    }

    cout << "The largest elements are " << lrgst << ", " << sec_lrgst << ", " << thrd_lrgst;

    return 0;
}
