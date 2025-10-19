#include<iostream>
using namespace std;

void prime(int n){

    if(n<2){
        cout<<"there are no prime numbers";
        return ;
    }

    int num=2;
    
    if(n==2){
        cout<<"there exist only one prime number till 2 that is : 2\n";
        return ;
    }

    cout<<"the prime numbers betweeen 2 and "<<n<< " are\n";

    while (num<=n){
        bool isPrime=true;
        for(int i=2;i<num;i++){
            if(num%i==0){
                isPrime=false;
                break;
            } 
        }
        if(isPrime==true){
        cout<< "the number :"<< num << " is a prime number\n";
        }
        num++;
    
    }
       
}

int main(){
    int n;
    cout<<"enter the value of the n";
    cin>>n;
    prime(n);
    
    return 0;
}