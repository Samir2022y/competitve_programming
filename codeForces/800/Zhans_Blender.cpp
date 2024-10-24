#include<iostream>
#include<cmath>
using namespace std;

// Author: Guenchi Samir
// Date: 2024-10-24
// Solution of Zhan's Blender

int main() {
    double trying , quantity , max_blender , max_putting  ;
    float time = 0 ;
    cin>>trying ;
    for (int counter =0 ; counter < trying ; counter ++){
        cin >> quantity >> max_blender >> max_putting ;
        time = max_putting > max_blender ? ceil(max_putting/max_blender) : 1 ;
        time = quantity > max_putting ? time*ceil(quantity/max_putting) : time ;
        cout<<time<<endl ; 
    }
    return 0;
}
