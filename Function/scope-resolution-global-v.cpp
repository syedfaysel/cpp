#include<iostream>
using namespace std;

int x = 10; 
//Notice that, this time, we don't declare the varibale inside the main function. Instead of that, we declare the variable globally, so that everyone (any function) or we can access it from anywhere. 

void customFunction(){

        cout<<"Globale varibale x,accessig from customFunction x = "<<x<<endl;
        //Now we will not get any error
}

int main(){

    //No local variable x is declared here. Still we can access the global variable
    cout<<"Global variable x, accessing from main function, x = "<<x<<endl;

    //calling the customFunction 
    customFunction();
}