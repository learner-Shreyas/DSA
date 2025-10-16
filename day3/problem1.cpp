// sum of all numbers from 1 to N divisible by 3

#include<iostream>
using namespace std;

int main(){
    int num,sum=0,i=1;
    cout<<"enter the end number: ";
    cin>> num;
    for(i=0;i<num ;i++){
        if(i % 3 == 0){
            sum += i;
        }
    }
    cout<<"the sum of all numbers from "<< 1<<" to "<<num<<" is :"<<sum;
    return 0;

}