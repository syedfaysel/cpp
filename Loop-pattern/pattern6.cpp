//Pattern type 6: 

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, row, column;

    cin>>n;

    for (row =1; row<=n; row++){

        //printing space before column items
        for(column = 1; column<=n-row; column++){
            cout<<" ";
        }

        for (column = 1; column<=row; column++){

            cout<<column;
        }
        cout<<"\n";
    }
    // Reverse pattern printing   
    for (row = n-1; row>=1; row--){

        //printing space before column items
        for(column = 1; column<=n-row; column++){
            cout<<" ";
        }

        for (column = 1; column<=row; column++){

            cout<<column;
        }
        cout<<"\n";
    }
}
