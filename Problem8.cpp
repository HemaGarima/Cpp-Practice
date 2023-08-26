// Print Star pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n for which you want the no. of lines of star . "<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}