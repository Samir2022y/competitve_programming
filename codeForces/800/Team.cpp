#include<iostream>
using namespace std ;
//Author : Guenchi Samir
// Date : 2024-10-25
// Solution of Team problem
int main(){
    int number_problems , Petya , versya , tonya , possible_problems=0 ;
    cin>>number_problems ;
    for(int counter = 0 ; counter < number_problems ; counter++){
        cin >> Petya >> versya >> tonya ;
        if(Petya+versya+tonya >=2)
         possible_problems+=1 ;
    }
    cout<<possible_problems<<endl ;
    return 0 ;
}