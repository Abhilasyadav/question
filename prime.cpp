#include<iostream>
using namespace std;


int main(){
    int n =23;
    int flag =0;
    for(int i =2;i<n/2;i++){
        if(n%i==0){
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<n<<" is a prime number";
    }else{
        cout<<n<<" not a prime number";
    }
}