#include<iostream>
using namespace std;


class Student{
    public:
        int id = 14;
        float gpa;
};

int main(){

//Object of Student class

    Student Rajo;
 
    cout<<Rajo.id<<endl;
    //it will show the value of id in Rajo object, 
    Rajo.gpa = 5;
    cout<<Rajo.gpa<<endl;

// Another object of Student Class 
    Student Faysel;
    Faysel.id = 15;
    Faysel.gpa = 4;
    cout<<"Faysel " <<Faysel.id<<endl;
    cout<<"Faysel "<<Faysel.gpa<<endl;

}