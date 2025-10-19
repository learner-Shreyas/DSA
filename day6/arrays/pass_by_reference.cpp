#include<iostream>
using namespace std;

void changearray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=2*a[i];
    }
}
int main(){
    int a[]={1,2,3,4};
    changearray(a,4);
    cout<<"the changes value of array elemnts are :"<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<"\t";
    }

    return 0;
}