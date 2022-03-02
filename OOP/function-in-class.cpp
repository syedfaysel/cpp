
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


};

int main()
{
    //creating object of student class
    Student Rajo,Faysel;

    //assining values to the objects 
    Rajo.id = 21101078;
    Rajo.score = 86;
    Rajo.gpa = 3.70;

    Faysel.id = 21301687;
    Faysel.score = 99;
    Faysel.gpa = 4.00;

    //calling the function or method of Student class from main function 
    Rajo.display(); //calling for Rajo object 
    Faysel.display(); //calling for Faysel object

}