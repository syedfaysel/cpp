//  Patter printing - type 2: Reverse Right angle triangle
/*
1.........n
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, row, column;
    //size of pattern
    cin>>n;

    //outer loop for each row
    for (row = n; row>=1; row--){
        
        //inner loop for each column in rows
        for (column = 1; column<=row; column++){

            //printing column items (in this case: we want different value) in a row
            cout<<column<<" ";
            // this case we want to print the row value
        }
        //printing newline after each row (moving to next row)
        cout<<"\n";
    }
}