

#include<iostream>
using namespace std;

int main(){

//way 1
    int arrayA[2][2];

    arrayA[0][0] = 10;
    arrayA[0][1] = 20;
    arrayA[1][0] = 30;
    arrayA[1][1] = 40;


//way 2: declaration & initialization
    int arrayB[2][3] = {
        {1,2,3},
        {4,5,6}
    };


// accessing 2d array using loop
    for(int row=0;row<2;row++){
        for(int col=0; col<3;col++){

            cout<<arrayB[row][col]<<endl;
        }
    }

    //way 3 : taking input to a 2d array using loop
    int x,y;
    cout<<"Enter the row of the 2D array: ";
    cin>>x;
    cout<<"Enter the column of the 2D array: ";
    cin>>y;

    int arrayC[x][y];

    for(int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cout<<"enter the element of index "<<i<<" "<<j<< "= ";
            cin>>arrayC[i][j];
        }
    }
    // accessing element using loop
    for(int i=0;i<x;i++){
        for (int j=0;j<y;j++){

            cout<<arrayC[i][j]<<" ";
        }
        
    }   
}