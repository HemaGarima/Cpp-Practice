// Program to reverse a string
#include<iostream>
using namespace std;


int main(){
    // PROGRAM WRITTEN BY ME

    // string a = "Hye , this is Hemlata Sharma . ";
    // int l = a.length();
    // int m = l/2;
    // // cout<<l<<endl;
    // for (int i = 0;i<m;i++){
    // int temp = a[i];
    // a[i] = a[l-i-1];
    // a[l-i-1] = temp;
    // }
    // // cout<<a[0];
    // cout<<a;

    // PROGRAM FOR LEARNING

    char s[] = "HemlataSharma";
    int len = 0;
    while(s[len] != '\0'){
        len++;
    }
    cout<<"The length of the string is : "<<len<<endl;
    for(int i = 0;i<(len/2);i++){
        char temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
    cout<<s<<endl;
    return 0;
}