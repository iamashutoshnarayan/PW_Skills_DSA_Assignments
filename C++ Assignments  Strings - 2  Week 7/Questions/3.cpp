#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        for (int j = i; j < str.size(); j++) {
            bool hasOnlyVowels = true;
            for (int k = i; k <= j; k++) {
                char ch = str[k];
                if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
                    hasOnlyVowels = false;
                    break;
                }
            }
            if (hasOnlyVowels) {
                count++;
            }
        }
    }
    cout << "Number of substrings that contain only vowels: " << count;
    return 0;
}
