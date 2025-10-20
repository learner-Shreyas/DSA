#include<iostream>
using namespace std;

int linear_search(int a[7],int target,int n){
    
    int res=0;
    for(int i=0;i<n;i++){
        if(a[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[]={1,2,4,6,3,8,9};
    int target=3;
    int x;
    int n= sizeof(a)/sizeof(int);
    x=linear_search(a,target,n);
    if(x==-1){
        cout<<"the number does not exist";
    }
    else{
        cout<<"the number is searched at an index of "<< x;
    }
}