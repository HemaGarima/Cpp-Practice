// To find largest element in an array

#include<iostream>
using namespace std;

int return_max(int arr[] , int n){
    int maximum = 4;
    for(int i = 0;i<n;i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }
    // arr[0] = 890;
    return maximum;
}

int return_min(int arr[] , int n){
    int minimum = 4;
    for(int i = 0;i<n;i++){
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    return minimum;
}


int main(){
    int array[] = {4 ,5,12,54 , 75 , 375 , 199,2,-1 , 200};
    int length = 10;
    int max = return_max(array , length);
    int min = return_min(array , length);
    cout<<"The maximum element in the array is "<<max<<endl;
    cout<<"The minimum element in the array is "<<min<<endl;
    // for(int i = 0;i<8;i++){
    //     cout<<array[i]<<endl;
    // }
    return 0;
}