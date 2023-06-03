//Let's know about constructor

//setting value using parameterized method or function is boring and old schoo;
// let's do some magic 

#include<iostream>
using namespace std;


class Student
{
    public:
    int id,score,gpa;
    
    //constructor (parameterized Constructor)
    Student(int x, int y, double z)
    {
        id = x;
        score = y;
        gpa = z;
    }

    //methods
    void display()
    {
        cout<<"id: "<<id<<endl<<"score :"<<score<<endl<<"gpa: "<<gpa<<endl;
    }
};


int main()
{
    //creating objects & setting value with by constructor
    Student Rajo(21101078, 97,4.00);
    Student Mahrab(21101048,95, 4.00);

    //calling other methods
    Rajo.display();
    Mahrab.display();

}
