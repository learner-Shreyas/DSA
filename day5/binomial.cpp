#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

int main(){
    int n,r;
    cout<<"enter the n and r value to calculate the nCr: ";
    cin>>n;
    cin>>r;
    if ((n<r))
    {return 0;
    }
    int x=n-r;
    int res=((fact(n))/((fact(r))*(fact(x))));
    cout<<"result is: "<<res;
}