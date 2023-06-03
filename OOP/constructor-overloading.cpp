#include<bits/stdc++.h>
using namespace std;




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
