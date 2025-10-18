#include<iostream>
using namespace std;

int sumofnum(int a){
    int x=0;
    while(a>0){
        int rem=a%10;
        a=a/10;

        x=x+rem;
        
    }
    return x;
}

int main(){
    cout<<"enter a 4-5 digit number to calculate sum of its digits";
    int a;
    cin>>a;
    int b=sumofnum(a);
    cout<<"b\n"<<b;
}