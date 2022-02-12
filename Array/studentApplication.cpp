// Student Application : Students marksheet
// Sum , average, maximum, minimum of the element of Array 

#include<iostream>
using namespace std;

int main(){

    int numberOfStudent,sum=0;
    cout<< "Enter the number of Students : ";
    cin>>numberOfStudent;
    int students[numberOfStudent];

    //Marks Input
    for(int i=0; i<numberOfStudent; i++){
        cin>>students[i];
        sum = sum + students[i];
    }
    float average =(float) sum / numberOfStudent; // typecasting 
    cout<<"Total Marks: "<<sum<<endl;
    cout<<"Average : "<<average<<endl;

    // Finding maximum & minimum 
    int max=students[0];
    int min=students[0];
    for(int j=0;j<numberOfStudent;j++){
        if (max < students[j]){
            max = students[j];
        }
        if (min>students[j]){
            min = students[j];
        }

    }
    cout<<"Maximum value of the array : "<<max<<endl;
    cout<<"Minimum value of the array : "<<min<<endl;
    
}
