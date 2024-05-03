#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    string s, t;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;
    if (s.size() != t.size()) {
        cout << "False"; 
        return 0;
    }
    unordered_map<char, int> freq;
    for (char ch : s)
        freq[ch]++;
    for (char ch : t) {
        freq[ch]--;
        if (freq[ch] < 0) {
            cout << "False";
            return 0;
        }
    }
    cout << "True"; 
    return 0;
}
