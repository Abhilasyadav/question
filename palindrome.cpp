#include<iostream>
using namespace std;

void palindrome(int n){
    int real = n;
    int reverse =0;
    int rm =0;
    while(n!=0){
        rm = n%10;
        reverse = reverse*10+rm;
        n = n/10;
    }
    if(real == reverse){
        cout<<real<<" is a palindrome number ";
    }else{
        cout<<real<<" is not a palindrome number ";
    }
}

int main(){
    int n =125;
    palindrome(n);
}