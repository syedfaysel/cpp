# Yay! Intro to OOP - Object Oriented Programming 

learning Date: 1st March, 2022
revision: 5th August, 2022
Rev 2: 3rd June, 2023

knowledge I have - OOP with python

## Basics & Major topics
* Class
* Object 
* Inheritance 
* Encapsulation 
* Polymorphism 
* Abstraction 


## Class 

> Class is a template or frame from which individual ***object*** or instace can be created.

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
---

## Object 

> C++ is an object-oriented programming language.

> Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

> Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

> A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

<br>

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

---

## Parameterized Function inside class



```cpp
    void setValue(int x, int y, int z)
    {
        id = x;
        score = y;
        gpa = z;
    }
```
<br>

--- 


## Constructor  

> Constructor is special type of function that is used to initialize an object. It is used inside a class. In general, constructor name &  the class name is similar. constructor has no type.(no return typer neither void)  e.g. 

```cpp
class Student
{
    public:
    int id,score, gpa;

    //constructor
    Student(int x, int y)
    {
        id = x;
        score = y;
        gpa = z;
    }
};
```

Notice that, the function, `Student()` which is also called constructor of this class, has no type before it. 

> No need to call constructor like other methods or function. It is automatically called when an object is created. 

## Types of Constructor & Constructor Overloading
1. [Default Constructor](#default-constructor)
2. [Parameterized Constructor](#parameterized-constructor)



### Default Constructor
> If a constructor does not have parameter/s , it is called `default constructor`.

### Parameterized Constructor
> If a constructor has parameter/s , it is called `paramterized constructor`. more on [this](./constructor.cpp)

i.e

```cpp
class Student{
  public:
    int id;
    float gpa;

    // default constructor
    Student(){
      cout << "This is default constructor\n";
    }

    // parameterized constructor
    Student(int x, float y){
      id = x;
      gpa = y;
      cout << "This is parameterized Constructor\n";
    }
};


int main(){
  Student Rajo; //default constructor will be called since no argument is passed;
  Student Faysel(123, 3.41); //parameterized constructor will be called

}
```
Check [constructor-overloading.cpp](./constructor-overloading.cpp)

### Constructor Overloading
>Constructor overloading is based on how and which constructor is called. There can be several constructors with differnt parameters in a class. Based on how many arguments are passed, the right constructor will be called. This is how constructor overloading is achieved.

---


Date : 7th March

<br>

## Class in Seperate Files


## Destructor





