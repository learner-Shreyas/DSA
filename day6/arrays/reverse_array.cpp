#include<iostream>
using namespace std;

void reverseArray(int a[],int n){
    int start=0,end =n-1;
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    reverseArray(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }

    
    return 0;
}