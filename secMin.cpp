#include<iostream>
#include<limits.h>
using namespace std;

int secMin(int arr[] , int n){
    int min = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]<min)min = arr[i];
    }

    int secmin = INT_MAX;
    for(int i =0;i<n;i++){
        if(min != arr[i] && arr[i]<secmin)secmin = arr[i];
    }
    return secmin;
    
}

int main(){
    int arr[] = {10,2,3,4,35,46,57,675,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<secMin(arr,n);
}