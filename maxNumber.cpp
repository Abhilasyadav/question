#include<iostream>
using namespace std;

int maxElement(int arr[], int n){
    int max = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>max)swap(max,arr[i]);
    }
    return max;
}

int main(){
    int arr[] = {1,5,3,779,377,54};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"largest number "<<maxElement(arr,n);
}