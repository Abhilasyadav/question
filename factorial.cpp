#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)return 1;
    else return n*factorial(n-1);
}

int fact(int n){
    int f = 1;
    for(int i =1;i<=n;i++){
        f = f*i;
    }
    return f;
}

int main(){
    int n =6;
    cout<<factorial(n)<<" ";
    cout<<fact(n);
    return 0;
}