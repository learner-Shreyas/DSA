#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<< "enter the value of n";
    cin>>n;
    

for(i=0;i<n;i++){
    
    for(j=n;j>i;j--){
        cout<<j<<" ";
        
    }
    cout<< endl;
}

}