#include<iostream>
using namespace std;

int main(){
    int n,f=1,i;
    cout<<"enter the end number: ";
    cin>> n;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    cout<<"the factorail of "<<n<<" is :"<<f;
    return 0;

}