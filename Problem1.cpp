// Generate multiplication table of a given number

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of which you need multiplication table. "<<endl;
    cin>>n;
    for(int i = 1 ; i<=10;i++){
        // cout<<i*n<<endl;
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}