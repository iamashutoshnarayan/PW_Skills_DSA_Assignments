#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout << "Enter the sentence: ";
    getline(cin, str);

    stringstream ss(str);
    string maxWord = "";
    string word;

    while (ss >> word) {
        if (word > maxWord) {
            maxWord = word;
        }
    }

    cout << "Lexicographically maximum word: " << maxWord;

    return 0;
}
