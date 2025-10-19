#include<iostream>
using namespace std;



int main(){
    int marks[]={10,20,30,40};
    int size=5;
    int sz=sizeof(marks)/sizeof(int);

    for(int i=0;i<=sz-1;i++){
        cout<<marks[i]<<"\t";
    }
    
    return 0;
}