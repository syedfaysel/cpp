// Scope Resolution 
#include<iostream>
using namespace std;


void customFunction(){

        cout<<"This variable from the customFunction function, x = "<<x<<endl;
        //it will show x is undefined inside the customFunction()
}

int main(){

    int x = 10;
    //this x =10 is a local variable, cz it's inside the main function. We can't access this varibale outside this function 

    cout<<"local variable from the main function, x = "<<x<<endl;

    //calling the customFunction
    customFunction();
}