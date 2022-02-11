// Switch is similar to if else.
// switch is used instead of too many if else
/* 
4 keywords used in switch : switch, case, break, default

 */

#include<iostream>
using namespace std;

int main()
{
    int digit;
    cout<<"Enter a digit from 0 - 9 : ";
    cin>>digit;

    switch(digit){
        case 0:
        cout<<"Zero";
        break;

        case 1:
        cout<<"One";
        break;

        case 2:
        cout<<"Two";
        break;

        case 3:
        cout<<"Three";
        break;

        case 4:
        cout<<"Four";
        break;

        case 5:
        cout<<"Five";
        break;

        case 6:
        cout<<"Six";
        break;

        case 7:
        cout<<"Seven";
        break;

        case 8:
        cout<<"Eight";
        break;

        case 9:
        cout<<"Nine";
        break;
        
        default:
        cout<<"Nothing";
    }


}