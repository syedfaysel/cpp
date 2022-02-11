// We can take input and store value in array

#include<iostream>
using namespace std;

int main(){

    int numbers[3];

    cin>>numbers[0]>>numbers[1]>>numbers[2];
    cout<<numbers[0]<<endl;
    cout<<numbers[1]<<endl;
    cout<<numbers[2]<<endl;


    // taking input & storing values in array using loop 
    int marks[5];
    for (int i=0;i<5;i++){
        cin>>marks[i];
        
    }
    for(int j=0;j<5;j++){
        cout<<marks[j]<<" ";
    }

}