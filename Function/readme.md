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



## Passing Arguments (to a function)  

> There are 2 ways to pass argument into a function 

1. Pass by value
2. Pass by Reference

Pass by value: 
```c++
int main(){

    int x=10;
    cout<<"value of x"<<x;

    display(x){
        //passing the value of (actual parameter or argument, original x er value change hobe na , actual parameter er ekta copy pass hoy)
    }

}
```
Pass by Reference: 
```c++
int main(){

    int x=10;
    cout<<"value of x"<<x;

    display(&x){
        //passing the address of x (original x er value change hoye jabe cz actual parameter tai pass hoye jacche)
    }

}
```


---
---

## Scope Resolution  

Source code: scope-resolution.cpp, local-variable.cpp, global-variable.cpp

> Before knowing about scope resolution, it's better to understand **local varibale** and **Global Variable**  

<br>

### Local Variable
<br>


```cpp
// Scope Resolution 
#include<iostream>
using namespace std;

void customFunction(){

        cout<<"This variable from the customFunction function, x = "<<x<<endl;
        //it will show x is undefined inside the customFunction()
}

int main(){

    int x = 10;
    //this x =10 is a local variable, cz it's inside the main function. We can't access this varibale outside this function 

    cout<<"local variable from the main function, x = "<<x<<endl;

    //calling the customFunction 
    customFunction();
}
```



```
We get this Error:
scope-resolution.cpp: In function 'void customFunction()':
scope-resolution.cpp:8:71: error: 'x' was not declared in this scope
         cout<<"This variable from the customFunction function, x = "<<x<<endl;
                                                                       ^
PS D:\Study\Code on VScode\Programming Workspace\C ++ With Anisul\Function>
```


> Now we let's know about **Global Variable** 

<br>  

### Global Variable   

<br>

```cpp
#include<iostream>
using namespace std;

int x = 10; 
//Notice that, this time, we don't declare the varibale inside the main function. Instead of that, we declare the variable globally, so that everyone (any function) or we can access it from anywhere. 

void customFunction(){

        cout<<"Globale varibale x,accessig from customFunction x = "<<x<<endl;
        //Now we will not get any error
}

int main(){

    //No local variable x is declared here. Still we can access the global variable
    cout<<"Global variable x, accessing from main function, x = "<<x<<endl;

    //calling the customFunction 
    customFunction();
}
```

output: 
```
g++ scope-resolution-global-v.cpp -o scope-resolution-global-v } ; if ($?) { .\scope-resolution-global-v }

Global variable x, accessing from main function, x = 10
Globale varibale x,accessig from customFunction x = 10
```


### Scope Resolution made clear

<br>

Heading Towards Scope Resolution :  
**Scope Resoultion Operator: ` :: `**

```cpp
//Scope Resolution made clear

#include<iostream>
using namespace std;

int x = 10; //Global variable

void customFunc(){

    cout<<"Global x, accessing from customFunc"<<x<<endl;
}

int main(){

    int x = 150; // local variable
    //Same variable for local & global
    //Which one will be accessed inside the main()?

    cout<<"I am local variable x inside main func - x =" <<x<<endl; // it will print out local varibale x

    cout<<"I am Global variable x inside main func - x =" <<::x<<endl; // it will print out Global varibale x
    // We access global variable by using scope operator :: when local & global variable has same name.

    //we can update the global variable
    ::x = 20;
    cout<<"updated Global variable x = "<<::x<<endl;
}
```

Output: 

```
I am local variable x inside main func - x =150
I am Global variable x inside main func - x =10
updated Global variable x = 20
```