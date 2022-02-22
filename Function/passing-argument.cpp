#include<iostream>
using namespace std;

//passing value
void displayXpassValue(int num){
        num =20;
    }
//passing reference 
void displayYrefValue(int *num){
        *num =30;
    }
int main(){

    int x = 10,y=15;

    cout<<"Passing value method"<<endl;
    cout<<"before calling the function x = "<<x<<endl;
    displayXpassValue(x);
    cout<<"after calling the function using pass value method, x = "<<x<<endl;
    // value of x is not changed bcz, we passed value, which is a copy of actual parameter or argument.


    cout<<"Passing reference method"<<endl;
    cout<<"before calling the function, y = "<<y<<endl;
    displayYrefValue(&y);
    cout<<"after calling the function using pass reference method, y = "<<y<<endl;
    //value of y will be changed, cz, we passed the reference,
    cout<<"value of y is changed bcz of passing reference";

}