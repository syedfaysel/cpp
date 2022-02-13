

#include<iostream>
using namespace std;

//custom function declared before the main funciton 
void display(int a=10, int b=20){

    cout<<a<<" "<<b<<endl;
}

int main()
{
    //calling the custom function inside the main function
    //  without passing any parameter: Hence we have default parameter value a=10, b=20
    display();
    // with parameter
    display(45,25);
    // With passing only one value or parameter, so another value will be from default parameter
    display(95);

}