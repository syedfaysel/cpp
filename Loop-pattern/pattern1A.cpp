//  Patter printing - type 1: Right angle triangle
/*
1
1 2
1 2 3
1 2 3 4
1.......n
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, row, column;
    cin>>n;

    //outer loop for each row
    for (row = 1; row<=n; row++){
        
        //inner loop for each column in rows
        for (column = 1; column<=row; column++){

            //printing column items in a row
            cout<<column<<" ";
        }
        //printing newline after each row (moving to next row)
        cout<<"\n";
    }
}