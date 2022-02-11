// Bitwise Operetor 
// and &, or |, exor ^, right shift >>, left shift <<  bitwise not ~ etc

#include<iostream>
using namespace std;

int main()
{
    int num1 = 32;
    int num2 = 24;
    int num3, num4, num5;
    num3 = num1 & num2;

    num4 = num1 | num2;
    num5 = num1 ^ num2;

    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    cout<<num4<<endl;
    cout<<num5<<endl;
    


    return 0;
}
