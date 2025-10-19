#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main(){
    int a;
    cout<<"enter the number to find out whether it is power of two or not";
    cin>>a;
    bool x= isPowerOfTwo(a);
    if(x==true){
        cout<<"yes the number is power of two";
    }
    else{
        cout<<"the number is not the power of two";
    }
    return 0;
}