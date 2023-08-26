// Count number of digits in an integer

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the integer of which you wants to count the number of digits in it . "<<endl;
    cin>>num;
    int count = 0;
    if(num == 0){
        count = 1;
    }
    while(num != 0){
        num = num/10;
        count++;
    }
    cout<<count;
    return 0;
}