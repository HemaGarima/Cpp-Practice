// Program to calculate power of a number

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number num of which you want the number of times the power should calculate . "<<endl;
    cin>>num;
    // int val = 1;
    long long int val = 1; // for long integers
    while(num--){
        val = val*2;
    }
    cout<<val;
    return 0;
}