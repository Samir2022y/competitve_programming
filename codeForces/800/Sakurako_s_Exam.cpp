#include <iostream>
using namespace std;
// Sakurako's Exam Solution
// Author: Guenchi Samir
// Date: 2024-10-24

bool check_zero(int numbers_ones, int number_twos) {
    if ((numbers_ones % 2 == 0) && (number_twos % 2 == 0)) {
        return true;
    } else if ((numbers_ones % 2 == 0) && (number_twos % 2 != 0) && (numbers_ones >= 2)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number_tries, number_ones, number_twos;
    cin >> number_tries;
    for (int i = 0; i < number_tries; i++) {
        cin >> number_ones >> number_twos;
        if (check_zero(number_ones, number_twos)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
