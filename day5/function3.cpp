#include<iostream>
using namespace std;

int minimum(int a,int b){
    int c= (a<b)?a:b;
    return c;
}

int main(){
    int a=10;
    int b=20;
    int c= minimum(a,b);
    cout<<"minimum number is :"<<c;
}