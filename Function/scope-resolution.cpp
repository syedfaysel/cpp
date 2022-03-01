//Scope Resolution made clear

#include<iostream>
using namespace std;

int x = 10; //Global variable

void customFunc(){

    cout<<"Global x, accessing from customFunc"<<x<<endl;
}

int main(){

    int x = 150; // local variable
    //Same variable for local & global
    //Which one will be accessed inside the main()?

    cout<<"I am local variable x inside main func - x =" <<x<<endl; // it will print out local varibale x

    cout<<"I am Global variable x inside main func - x =" <<::x<<endl; // it will print out Global varibale x
    // We access global variable by using scope operator :: when local & global variable has same name.

    //we can update the global variable
    ::x = 20;
    cout<<"updated Global variable x = "<<::x<<endl;
    
}