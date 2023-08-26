// Program to print star pattern-2

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n for which you want the star pattern of : "<<endl;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if((i+j) >= (n-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}