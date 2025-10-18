#include<iostream>
using namespace std;

int main(){
    int n,i,j,k,l;
    cout<< "enter the value of n";
    cin>>n;
    
    int num=1;
for(i=0;i<n;i++){
    //spaces
    for(j=i;j<n-1;j++){
        cout<<" ";
    }
    for(k=0;k<=i;k++){
        cout<<k+1;
    }
    for(l=i;l>0;l--){
        cout<<l;
    }
    cout<<endl;
}

}