#include<iostream>
using namespace std;

int main(){
    int i,n=10,sum=0;
    for(i=1;((i<=n)); i++){
        if(i%2 !=0)
        sum += i;
    }
    cout<< sum;
    return 0;

}