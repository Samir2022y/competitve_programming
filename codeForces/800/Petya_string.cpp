#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

// Function to convert a string to lowercase
string toLowerString(const string& str) {
    string lowerStr;
    for (char ch : str) {
        lowerStr += tolower(ch);
    }
    return lowerStr; 
}

// Author: Guenchi Samir
// Date: 2024-10-25
// Solution of Petya and string 
int main() {
    string size_one, size_two;
    cin >> size_one >> size_two; 
    size_one = toLowerString(size_one);
    size_two = toLowerString(size_two);
    if (size_one > size_two) {
        cout << "1" << endl; 
    } else if (size_one < size_two) {
        cout << "-1" << endl; 
    } else {
        cout << "0" << endl; 
    }

    return 0; 
}
