#include<iostream>
using namespace std;

void armstrong(int n){
    int real = n;
    int rm = 0;
    int sum = 0;
    while(n != 0){
        rm = n%10;
        sum = sum + (rm*rm*rm);
        n = n/10;
    }
    if(real == sum){
        cout<<real<<" is a armstrong number"<<endl; 
    }else{
        cout<<real<<" not a armstrong number"<<endl;
    }
}

int main(){
    int n =155;
    armstrong(n);

}