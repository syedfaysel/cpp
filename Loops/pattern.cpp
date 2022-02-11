// To understand Nested loop perfectly. [Notice the outer for loop & Inner for loop.Important]
// Pattern 

#include<iostream>
using namespace std;

int main(){

    int lines,row, column;
    cout<< "Enter line number : ";
    cin>> lines;

    for (row = 1; row<=lines; row++){ 

        for (column = 1; column<=row;column++){ 
            cout<<" "<<column;  // if we put endl here, we will not get the pattern like triangle
        }
        cout<<endl; //After eadh iteration in outer loop, there will be a newline. 

        /* Let's say, when row =1 in outer loop, inner loop will execute & value of column is 1.
            as in inner loop column<=row, we only get 1 in inner loop in 1st iteration.
            In 2nd iteration, row = 2, inner loop will execute & value of column starts at 1 and ends at 2; Then inner loop will print the value of columns in the same line. And the outer loop will print a new line. This is how the pattern created
        
         */

    }


}