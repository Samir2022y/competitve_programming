#include <iostream>
#include <string>
using namespace std;
// Wat Too Long Words
// Author: Guenchi Samir
// Date: 2024-10-24
int main() {
    int number_tries;
    cin >> number_tries;
    for (int i = 0; i < number_tries; i++) {
        string word;
        cin >> word;
        if (word.length() > 10) {
            string help_str = word[0] + to_string(word.length() - 2) + word[word.length() - 1];
            cout << help_str << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}
