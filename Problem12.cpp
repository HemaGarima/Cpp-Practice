#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n for which you wants the star pattern of : "<<endl;
    int n;
    cin>>n;
    // First Approach
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         if((i+j) >= (n-1)){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     for(int j = 0;j<(n-1);j++){
    //         if(i>j){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Second Approach
    for(int i = 0;i<n;i++){
        for(int j = 0;j<(n+n);j++){
            if(j>=(n-1-i) && j<=(n-1+i)){
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