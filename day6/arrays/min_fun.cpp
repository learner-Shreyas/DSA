#include<iostream>
using namespace std;

int main(){
    int a[5]={10,40,-30,80,2};
    int smallest=a[0];

    for(int i=0;i<5;i++){
        smallest=min(a[i],smallest);
    }
    cout<<"the smallest in the array is: "<<smallest<<endl;

    
    return 0;
}