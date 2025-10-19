#include<iostream>
using namespace std;

int main(){
    int a[5]; 
    cout<<"enter the array elements"; 

    for(int i=0;i<5;i++){
        cin>>a[i];

    }

    int marks[5]={99,70,67};
    int x[]={10,20,30};

    cout<<"the array marks contains"<<endl;
    for(int i=0;i<3;i++){
        cout<<marks[i]<<"\t";
    }

    return 0;
}