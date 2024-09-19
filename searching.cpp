#include<iostream>
using namespace std;

int binarySeach(int arr[] , int n , int t){
    int start = 0 ;
    int last = n-1;
    int mid = start + (last-start)/2;

    while(n>0){
        if(arr[mid] == t){
            return mid+1;
        }else if(arr[mid] <t){
            start = mid+1;
        }else{
            last = mid-1;
        }
        mid = start + (last-start)/2;
    }
    return -1;
}

int linearSearch(int arr[], int n , int t){
    for(int i =0; i<n-1;i++){
        if(t == arr[i]){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,7,98};
    int n = sizeof(arr)/sizeof(arr[0]);

    // cout<<binarySeach(arr,n,7);
    cout<<linearSearch(arr,n,3);
    return 0;
    
}