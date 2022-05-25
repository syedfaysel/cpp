
//  Patter printing - type 3:Forward & Reverse Right angle triangle
/*
1
1 2
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
    for (row = 2; row<=n; row++){
        
        //inner loop for each column in rows
        for (column = 1; column<=row; column++){

            //printing column items (in this case: we want different value) in a row
            cout<<column<<" ";
            // this case we want to print the column value
        }
        //printing newline after each row (moving to next row)
        cout<<"\n";
    }

    for (row = n-1; row>=1; row--){

        for (column = 1; column <=row; column++){

            cout<<column<<" ";
        }
        cout<<endl;
    }
}