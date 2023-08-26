// Program to print star pattern 5

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n for which you want the star pattern . "<<endl;
    cin>>n;

    // First Approach
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         if(i>=1 && i<(n-1) && j>=1 && j<(n-1)){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Second Approach
    for(int i = 0;i<n;i++){
        for(int j= 0;j<n;j++){
            if(i == 0 || j == 0 || i==n-1 || j==n-1){
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