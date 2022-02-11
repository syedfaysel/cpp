// Arithmetic Operation 


#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter a number : ";
    cin>>num1;
    cout<<"Enter another number : ";
    cin>>num2;
    int sum = num1+num2;
    int difference = num1 - num2;
    float product = num1*num2;
    float quotient = num1/num2;

    cout<<"Num 1: "<<num1<<endl;
    cout<<"Num 2: "<<num2<<endl;
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Difference is: "<<difference<<endl;
    cout<<"Product is : "<<product<<endl;
    cout<<"Quotient: "<<quotient<<endl;

    return 0;

}