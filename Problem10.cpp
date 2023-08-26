// Program to print prime numbers in a given range

#include<iostream>
using namespace std;

int isprime(int m){
    int isprime = 1;
    for(int i = 2;i*i<=m;i++){
        if(m%i == 0){
            isprime = 0;
        }
    }
    return isprime;
}

int main(){
    int k,l;
    cout<<"Enter the value of k and l for which range you want to see the prime numbers . "<<endl;
    cin>>k;
    cout<<endl;
    cin>>l;
    cout<<endl;
    for(int i = k;i<=l;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}