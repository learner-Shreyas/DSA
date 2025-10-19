#include<iostream>
using namespace std;

int main(){
    int a[5]={10,40,-30,80,2};
    int smallest=a[0];
    int largest=a[0];
    int x,y;

    for(int i=0;i<5;i++){
        if(a[i]>=largest){
            largest=a[i];
            x=i;
        }
    }
    cout<<"the largest in the array is: "<<largest<<" at an index of "<<x<<endl;

    for(int i=0;i<5;i++){
        if(a[i]<=smallest){
            smallest=a[i];
            y=i;
        }
    }
    cout<<"the smallest in the array is: "<<smallest<<" at an index of "<<y<<endl;

    
    return 0;
}