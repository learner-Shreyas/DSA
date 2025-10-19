#include<iostream>
using namespace std;

int dec_func(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int rem=n%10;
        n/=10;
        ans+=(rem*pow);
        pow=pow*2;
    }
    return ans;
}


int main(){
    
    int a;
    cout<<"enter the binary number to convert it to decimal";
    cin>>a;

    int c=dec_func(a);
    cout<<"the decimal value of "<<a<<" is :"<<c;
    
    return 0;
}