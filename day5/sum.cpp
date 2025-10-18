#include<iostream>
using namespace std;

int summ(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter the number till where you need sum";
    cin>>n;
    int a=summ(n);
    cout<<"sum is "<<a;
}