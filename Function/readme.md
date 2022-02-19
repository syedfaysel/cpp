## Previous topic to be covered: 


## Function Overloading 
**What is Function Overloading ?**
> Function overloading is a process of declaring :
1. Multiple Function with the **Same name**  
2. Different Parameters (Parameter list must be different)

example: 
```c++
#include<iostream>
using namespace std;

//Custom function with same name but different number of Parameters

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

    sum(2,3); // which is the function with 2 parameters
    sum(3,4,5); //which is the function with 3 parameters

}
```






