#include<iostream>
#include<limits.h>
using namespace std;

int secondMax(int arr[], int n){
    int max = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>max)swap(max,arr[i]);
    }
    int secMax = INT_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]!=max && arr[i]>secMax)secMax = arr[i];
    }
    return secMax;


}

int main(){
    int arr[] = {1,2,3,4,565,76};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<secondMax(arr,n)<<endl;
}