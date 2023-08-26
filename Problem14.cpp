#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n for which you want the number pattern . "<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(j>=i){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}