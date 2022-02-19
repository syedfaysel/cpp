#include<iostream>
using namespace std;


//Custom function

void sum(int x, int y){
    int total;
    total = x + y;
    cout<<total<<endl;

}
void sum(int x, int y,int z){
    int total;
    total = x + y+ z;
    cout<<total<<endl;

}
int main()
{
  
sum(2,3); // which has 2 parameters
sum(3,4,5); //which has 3 parameters


}

