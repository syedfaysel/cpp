// Multiplication table

#include<iostream>
using namespace std;

int main()
{
    int table;
    int product;
    cout<<"Enter number to get multiplication table : ";
    cin>>table;
    for(int i=1; i<=10; i++){
        product = table*i;
        cout<<table<<"X"<<i<<"= "<<product<<endl;
    }
    return 0;

}