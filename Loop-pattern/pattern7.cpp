// Pattern type 7: printing same item in each row and column

/*
 *  *  *  *
 *  *  *  *
 *  *  *  *
 *  *  *  *
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, row, col;

    cin>>n;

    for(row=1; row<=n; row++){

        for (col =1;col<=n; col++){

            cout<<" * "; //printing star
            // cout<<row; //to print row number
            // cout<<col; // to print column number
            // cout<<char(col+96); // to print character, capital 64, small 96
        }
        cout<<"\n";
    }
}