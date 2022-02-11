// Intro to array - code 1

#include<iostream>
using namespace std;

int main(){
    
    int numbers[]= {2,54,12,4,6,34,54,3,8,9};
    cout<<numbers[1]<<endl; // accessing array element using index number
    numbers[1]=25;
    cout<<numbers[1]; // Modifying array using index number.
}