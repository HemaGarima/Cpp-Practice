// Program to find prime number

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the element for which you want to check that it is prime number or not. "<<endl;
    int num;
    cin>>num;
    int isprime = 1;

    // Time Complexity is O(n)
    // for(int i = 2;i<num;i++){
    //     if(num%i == 0){
    //         isprime = 0;
    //     }
    // }

    // Time Complexity is O(root n)
    for(int i = 2;i*i<=num;i++){
        if(num%i == 0){
            isprime = 0;
        }
    }
    
    if(isprime == 0){
        cout<<num<<" is not a prime number . "<<endl;
    }
    else{
        cout<<num<<" is a prime number . "<<endl;
    }
    
    return 0;
}