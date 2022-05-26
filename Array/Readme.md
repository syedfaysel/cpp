
# Introduction to Array 

Array in C++ is little bit similar to list of python.  

**What is array?**  

> Array is a collection of varibale or Data (of the same data type)

**How to declare an array?**  

> data_type array_name[arraysize]

```c++
int numbers[] = {2,54,12,4,6,34,54,3,8,9};
```
here, numbers is a array of integer data type and the size of this array is 10. array is declared by square brackets [ ]  
when assigning value to array, we use curly braces.

## Accessing an Array

> We use indexing to access data from array. in most of the language indexing starts from zero **[0]**. In above mentioned array , we can access 54 by using 

```c++ 
cout<<numbers[1];
```
This will give us the output 54.  

**Modifying array using index**
> we can modify array using index number. `numbers[1] = 25;` will replace the value 54, which is 2nd index.
 
## Input & output of array elements:  

```c++
// taking input & storing values in array using loop 

    int marks[5];
    for (int i=0;i<5;i++){
        cin>>marks[i];
    // iterate till the size of array

    }
    for(int j=0;j<5;j++){
        cout<<marks[j]<<" ";
    }
```
<br>
  


# Types of Array 

**There are 3 types of an array in C++ :**  
1. **One-dimensional array**. 
> also called **linear array**. `int numbers[10] ` is a one dimentional array. Note: 1 square bracket [ ]

2. **Two-dimensional array**.
> also called **matrix array**. ` int numbers[3][2] ` is a 2D or two dimentional array. Note: 2 square brackets. (it is called matrix array because 1st square bracket is for row and 2nd square bracket is for column)

3. **Multidimensional array.** 
> There are 3D array or more than that. ` int numbers[5][2][3]` is a three dimentional array. Note: 3 square brackets

---

## 2D Array : Two dimentional array

## table of Contents

| Sl: | Content / program |
| ----------- | ----------- |
| 1 | Introduction to 2D array |
| 2 | Getting input for 2D array |
| 3 | Simple Matrix |
| 4 | Matrix Addition & Subtraction |
| 5 | Matrix Multiplication |
| 6 | Transpose Matrix |
| 7 | Sum of Diagonal Elements of a Matrix |
| 8 | Sum of Upper & lower triangles of a Matrix |

<br>

**How to declare 2D array ?**  

>Two dimentonal Array Decleration

```c++
//data_type array_name[row_size][column_size]

int two_D_array[2][3];
```
> Number of the elements = rows * columns = 2*3 = 6


