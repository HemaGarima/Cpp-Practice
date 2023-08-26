// Find sum of first n Natural numbers n O(1)

#include<iostream> 
using namespace std;

int main(){
    int n;
    cout<<"Enter the number upto which you want sum of all natural numbers. "<<endl;
    cin>>n;
    int sum;

    // Rund in linear time
    // First method is :
    // sum = 0;
    // for(int i = 1;i<=n;i++){
    //     sum += i;
    // }

    // Runs in constant time
    // Other method is (improved) :
    sum = (n*n + n)/2;

    cout<<sum;
    return 0;
}