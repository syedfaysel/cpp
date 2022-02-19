#include<iostream>
using namespace std;

double factorial(int n){
    //base case : when the condition is true, function will no longer call itself.
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1); //here the the function calling itself with the parameter (n-1)
        //n!= n*(n-1)! general formula
    }
}

int main(){
    int nFactorial;
    cout<<"Which factorial do you want :"<<endl;
    cin>>nFactorial;

    //calling factorial function 

    cout<<factorial(nFactorial);

}