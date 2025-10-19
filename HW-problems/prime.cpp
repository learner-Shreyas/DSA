#include<iostream>
using namespace std;

void prime(int n){

    bool isPrime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<< "the number-"<< n << " is a prime number";
    }else{
        cout<< "the number-"<< n << " is not a prime number";

    }    
}

int main(){
    int n;
    cout<<"enter the value of the n";
    cin>>n;
    prime(n);
    
    return 0;
}