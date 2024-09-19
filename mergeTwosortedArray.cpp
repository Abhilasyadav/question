#include<iostream>
using namespace std;

void mergeTwoSortedArray(int arr1[] ,int arr2[] ,int n1 ,int n2){
    int arr[n1+n2];
    int i = 0 , j = 0 , k = 0 ;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr[k++] = arr1[i++];
        }else{
            arr[k++] = arr2[j++];
        }
    }
        while(i<n1){
            arr[k++] = arr1[j++];
        }
        while(j<n2){
            arr[k++] = arr2[j++];
        }
    for(int i =0; i<n1+n2; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr1[] ={1,2,4,6};
    int arr2[] ={3,4,5,7,8,9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    mergeTwoSortedArray(arr1 ,arr2 ,n1 ,n2);
}