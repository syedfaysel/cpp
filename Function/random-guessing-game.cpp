#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int userGuess, randomNumber;
    
    //while(1)- here 1 means true, jotokkhon true totokkhon execute hobe
    while(1){
    randomNumber = rand()%5+1;
    cout<<"Guess a number between 1 to 5: "<<endl;
    cin>>userGuess;
    if (userGuess==randomNumber){
        cout<<"Guess Correct. You WON!!"<<"Number was: "<<randomNumber<<endl;
    }
    else{
        cout<<"Opppps! Better luck next time."<<"Number was: "<<randomNumber<<endl;
    }
    }


}