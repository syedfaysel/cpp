//  Patter printing - type 2: Reverse Right angle triangle
/*
Same value in row
1.........n
5 5 5 5 5
4 4 4 4 
3 3 3 
2 2
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

            //printing column items (in this case: we want same value) in a row
            cout<<row<<" ";
            // this case we want to print the row value
        }
        //printing newline after each row (moving to next row)
        cout<<"\n";
    }
}