#include<iostream>
#include<cmath>
using namespace std;

// Author: Guenchi Samir
// Date: 2024-10-24
// Solution of Zhan's Blender

int main() {
    int trying, quantity, max_blender, max_putting;
    int time;

    cin >> trying;
    for (int counter = 0; counter < trying; counter++) {
        cin >> quantity >> max_blender >> max_putting;
        time = 0;

        // Case 1: If we can blend all the fruits in one round
        if (max_putting >= quantity) {
            time = 1;
        } else {
            // Case 2: Calculate how many rounds needed to blend all fruits
            time = ceil((double)quantity / max_putting);
        }

        // Now, adjust the time based on the blender capacity
        if (max_blender < max_putting) {
            time = (time * ceil((double)max_putting / max_blender));
        }

        cout << time << endl;
    }

    return 0;
}
