#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int max = -1, sec_max = -1;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= '0' && str[i] <= '9') { 
            int digit = str[i] - '0'; 
            if (digit > max) {
                sec_max = max;
                max = digit;
            } 
            else if (digit > sec_max && digit < max) {
                sec_max = digit;
            }
        }
    }
    if (sec_max != -1) {
        cout << "Second Largest Digit: " << sec_max;
    } 
    else {
        cout << "No second largest digit found.";
    }
    return 0;
}
