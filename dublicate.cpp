#include<iostream>
using namespace std;

int dublicateElement(int arr[], int n){
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] ^ arr[j] == 0){
                return arr[j];
            }
        }
    }
}

int main(){
    int arr[] =  {1,2,3,45,67,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<dublicateElement(arr,n);
}