// Checking Leap year

/* 
Leap Year Algorithm

if year is divisible by 4 but not by 100, this is Leap Year;
if year is divisible by 400, this is leap year;
else, not a leap year 
 */

#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<< "Enter a year : ";
    cin>> year;
    if(year%4==0 && year%100!=0){
        cout<<year<<" is a leap year";
    }
    else if(year%400==0){
        cout<<year<< " is  a leap year";
        }
    else{
        cout<<year<<" is not a leap year";
    }



    return 0;
}