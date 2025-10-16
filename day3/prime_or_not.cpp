#include<iostream>
using namespace std;

int main(){
    int a,i;
    bool isPrime =true;
    cout<< "enter a number";
    cin>> a;

    if(a==2){
        cout<<"prime number";
    }

    //for(i=2;i*i<=n;i++)
    
    for(i=2;i<=a-1;i++){
        if(a%i==0){
            isPrime=false;
            break;
        }
    }

    if(isPrime==true){
        cout<<"it is a prime number";
    }else{
        cout<<"not a prime number";
    }
    return 0;

}