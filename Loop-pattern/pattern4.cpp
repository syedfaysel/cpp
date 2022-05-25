//  Patter printing - type 4: vertically flipped Right angle triangle
/*
    1
  1 2
1 2 3

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, row, column;
    //size of pattern
    cin>>n;

    //outer loop for each row
    for (row = 1; row<=n; row++){

        // printing empty sapces before printing numbers or items in cloumn
        for (column = 1; column<=n-row; column++){
            cout<<" ";
        }
        
        //inner loop for each column in rows 
        for (column = 1; column<=row; column++){

            //printing column items (in this case: we want different value) in a row
            cout<<column;
            // this case we want to print the column value

            //cout<<row;
            //cout<<"*"
        }
        //printing newline after each row (moving to next row)
        cout<<"\n";
    }
}