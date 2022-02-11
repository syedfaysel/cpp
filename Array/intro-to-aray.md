
# Introduction to Array 

Array in C++ is little bit similar to list of python.  

**What is array?**  

> Array is a collection of varibale or Data (of same data type)

**How to declare an array?**  

> data_type array_name[arraysize]

```c++
int numbers[] = {2,54,12,4,6,34,54,3,8,9};
```
here, numbers is a array of integer data type and the size of this array is 10. array is declared by square brackets [ ]  
when assigning value to array, we use curly braces.

**Accessing an Array**

> We use indexing to access data from array. in most of the language indexing starts from zero **[0]**. In above mentioned array , we can access 54 by using 

```c++ 
cout<<numbers[1];
```
This will give us the output 54.  

**Modifying array using index**
> we can modify array using index number. `numbers[1] = 25;` will replace the value 54, which is 2nd index.
 

___


