#include<iostream>
using namespace std;

int main(){
    int i,n=10,sum=0;
    for(i=0;i<=n;i++){
        (sum+=i);
    }
    cout<<sum<<endl;
    return 0;

}