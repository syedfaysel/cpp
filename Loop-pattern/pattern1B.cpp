//  Patter printing - type 1: Right angle triangle
/*
1
2 2
3 3 3 
4 4 4 4
5 5 5 5 5 
n.........n
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
            cout<<row<<" ";
            // this case we want to print the row value
        }
        //printing newline after each row (moving to next row)
        cout<<"\n";
    }
}