#include<iostream>
using namespace std;

//custom function
void displayArray(int num[],int arraySize)
{
    for (int i=0;i<arraySize;i++){
        cout<<num[i]<<" ";
    }
}


int main()
{
    int numArray[5]={10,20,30,40,50};
    //calling displayArray() function

    displayArray(numArray,5);

}