#include<iostream>
using namespace std;

int bin_func(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int rem=n%2;
        n/=2;
        ans+=(rem*pow);
        pow=pow*10;
    }
    return ans;
}


int main(){
    
    for(int i=1;i<=10;i++){
        int c=bin_func(i);
        cout<<"the binary value of "<<i<<" is :"<<c<<endl;
    }
    
    return 0;
}