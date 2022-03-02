# Yay!! Intro to OOP - Object Oriented Programming 

learning Date: 1st March, 2022

Preknowledge I have - OOP with python, JavaScript

## Basics & Major topics
* Class
* Object 
* Inheritance 
* Encapsulation 
* Polymorphism 
* Abstraction 


## Class 

> Class is a template from which individual ***object*** can be created.

> And any class type variable are called Object.  
For example `int variableName` is an integer type variable. Same way if a class name is `Student` and we represent an object of Student class type like this `Student Rajo`.   
Here Rajo is a Student type object.
Object hocche class type er variable.  

That's the simplest way to understand Class & Object   


**Declare Class & Object**


```cpp
class className
{
    public:
    //variables
    //Functions
};

//Declaring Object
className objectName;

```

## Object 
> C++ is an object-oriented programming language.

> Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

> Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

> A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.


___

Date: 3rd march

## Adding Function to Class 

source-code: function-in-class.cpp

Functions inside class are also called **method**.
Look at the code below.


```cpp
//class 
class Student{
    public:
    //everything should be inside public
    int id;
    int score;
    double gpa;
    
    //function inside class is also called method
    void display()
    {
        cout<<"id: "<<id<<endl<<"score: "<<score<<endl<<"gpa: "<<gpa<<endl;
    }

};
```
This way we can add function or method to class. 

## Parameterized Function inside class



```cpp
    void setValue(int x, int y, int z)
    {
        id = x;
        score = y;
        gpa = z;
    }
```


