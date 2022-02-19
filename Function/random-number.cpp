#include<iostream>
#include<stdlib.h> //to use rand() function
#include<conio.h>
using namespace std;

int main()
{
    int randomNumber = rand();
    int anotherNumber = rand();

    
    cout<<"Random number is : "<< randomNumber <<endl;
    cout<<"Random number is : "<<anotherNumber;

    // using a loop 
    for (int i=1;i<=5;++i){
        // random number in range 0 to 5 and 10
        int upto5 =rand()%5; // think deeper why modulus 
        int upto10 =rand()%10;
        cout<<"random number upto 5: "<<upto5<<endl;
        cout<<"random number upto 10: "<<upto10<<endl;

    }
    return 0;
}