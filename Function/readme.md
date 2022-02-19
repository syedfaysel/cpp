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



## Passing array to a function  

> We can pass array to a function. To access array using a function we need to give the array and the array size as parameter so that we can loop through array. As simple as it is.

Example Code: 

```c++
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
```
> Output to this code : `10 20 30 40 50 `  

<br>

## Recursion
<br>

**What is Recursion?**

> Recursion is a process where a function can call itself.  

> However, we need to stop the call at a certain condition, otherwise it will be calling infinitely. This particular condition is called ***base case***

2 Important things to remember in Recursion 
1. Recursive call
2. Base case

<br>

![Recursion Example](/Function/notes/recursion-example.jpg)








