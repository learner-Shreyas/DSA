#include<iostream>
using namespace std;

int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

int main(){
    
    int a=factorial(5);
    cout<<"factorial of 5 is :"<<a;
}