#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<< "enter the value of n";
    cin>>n;
    int num=0;

for(i=0;i<n;i++){
    
    for(j=0;j<n;j++){
        cout<< num+1<<" ";
        num++;
    }
    cout<< endl;
}

}