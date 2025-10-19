#include<iostream>
using namespace std;

int main(){
    int a[5]={10,40,-30,80,2};
    int largest=a[0];

    for(int i=0;i<5;i++){
        largest=max(a[i],largest);
    }
    cout<<"the largest in the array is: "<<largest<<endl;

    
    return 0;
}