
#include<iostream>
using namespace std;

//class 
class Student{
    public:
    //everything should be inside public

    //variables
    int id;
    int score;
    double gpa;
    
    //function inside class is also called method
    void display()
    {

        cout<<"id: "<<id<<endl<<"score: "<<score<<endl<<"gpa: "<<gpa<<endl;
    }

    //----------
    void setValue(int x, int y, int z)
    {
        id = x;
        score = y;
        gpa = z;
    }


};

int main()
{
    //creating object of student class
    Student Rajo,Faysel;

    //assining values to the objects uisng method:
    Rajo.setValue(21101078,87,3.7);
    Faysel.setValue(21303456,97,4.0);

    //calling the function or method of Student class from main function 
    Rajo.display(); //calling for Rajo object 
    Faysel.display(); //calling for Faysel object


    // We will get the same output as we got in function-in-class file. 
    // this time using method.
}