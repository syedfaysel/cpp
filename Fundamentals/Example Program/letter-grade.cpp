// Checking Letter Grade 

#include<iostream>
using namespace std;

int main()
{
    float mark;
    cout<< "Enter your mark: ";
    cin>>mark;

    if(mark<0 && mark>100){
        cout<<"Invalid Mark";
    }
    else if (mark<33){
        cout<<"F: Fail";
    }
    else if(mark<40){
        cout<<"D";

    }
    else if (mark<50){
        cout<<"C";
    }
    else if (mark<60){
        cout<<"B";
    }
    else if (mark<70){
        cout<<"A-";
    }
    else if(mark<80){
        cout<<"A";
    
    }
    else{
        cout << "A+";
    }
    return 0;
}