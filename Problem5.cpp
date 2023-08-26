// Convert decimal number to binary number

#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number of which you want binary number . "<<endl;
    cin>>n;
    int rem;
    int a[10];
    int i = 0;
    if(n == 0){
        cout<<"00"<<endl;
    }
    while(n){
        rem = n%2;
        n = n/2;
        a[i] = rem;
        i++;
    }
    for(int j = i-1;j>=0;j--){
        cout<<a[j]; 
    }
    
    return 0;
}

// Quiz : convert binary number to decimal number