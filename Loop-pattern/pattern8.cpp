// Pattern type - 8: Pyramid printing 

/*
       1
    1  2  3
1   2  3   4  5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, row, col;

    cin>>n;

    for (row = 1; row<=n; row++){

        //printing white space to make pyramid
        for(col = 1; col<=n-row; col++){
            cout<<" ";
        }

        //Notice the condition
        for(col= 1; col<=(row*2)-1; col++){
            cout<<"*";
            // cout<<row;
            // cout<<col;
            // cout<<char(row+96);
            // cout<<char(row+64);
            // cout<<char(col+97);
            // cout<<row%2;
            // cout<<col%2;
        }
        cout<<endl;
        // cout<<"\n";
    }
}