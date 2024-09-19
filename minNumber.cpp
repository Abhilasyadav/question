#include<iostream>
using namespace std;

int minElement(int arr[] , int n){
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min)swap(min,arr[i]);
    }
    return min;
}

int main(){
    int arr[] = {10,23,456,774,85,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Smallest number "<<minElement(arr,n);
}