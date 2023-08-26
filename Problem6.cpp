// Reverse a number

#include<iostream>
using namespace std;

int reverse_number(int n){
    int rem;
    int reverse = 0;
    while(n){
        rem = n%10;
        n = n/10;
        reverse = reverse*10 + rem;
    }
    return reverse;
}

int main(){
    int n;
    cout<<"Enter the number of which you want the reverse of : "<<endl;
    cin>>n;
    cout<<reverse_number(n);
    return 0;
}