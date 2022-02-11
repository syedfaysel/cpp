/* 
Do while: code runs at least once without even checking the condition 

initialization;
do{
    statement;
    increment or decrement;
}
while(condition);
 */




#include<iostream>
using namespace std;

int main()
{
    int i=1;
    do {
        cout<<"Hello from do while loop, when condtion is not even true, See I ran\n";
        i++;
    }
    while(i<1);
    
    return 0;
}