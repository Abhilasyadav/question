#include<iostream>
using namespace std;

int fibonacci(int n){
    int f = 0 ;
    int s = 1,sum =0;
    if(n==0)return f;

    for(int i =2 ;i<=n;i++){
        sum = f+s;
        f = s;
        s = sum;
    }
    return s;
}

int rfibonacci(int n){
    if(n<=1)return n;
    int ans =  rfibonacci(n-1) + rfibonacci(n-2);
    return ans;
}
int main(){
    cout<<fibonacci(9)<<" ";
    cout<<rfibonacci(9);
    return 0;
}