#include<iostream>
using namespace std;


// Recursive approach
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n*factorial(n-1);
}

// Iterative approach
int fac(int num){
        int val = 1;
        for(int i = num;i>=1;i--){
            val *= i;
        }
        return val;
    }

int main(){
    int num;
    cout<<"Enter the number of which you want factorial of : "<<endl;
    cin>>num;
    // cout<<"Factorial of number "<<num<<" is "<<factorial(num)<<endl;
    cout<<"Factorial of number "<<num<<" is "<<fac(num)<<endl;

    
    return 0;
}