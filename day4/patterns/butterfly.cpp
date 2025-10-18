#include<iostream>
using namespace std;

int main(){
    int n,i,j,k,l;
    cout<< "enter the value of n";
    cin>>n;
    

for(i=0;i<n;i++){

    for(j=0;j<=i;j++){
        cout<<"*";
    }

    for(k=0;k<(2*(n-i)-2);k++){
        cout<<" ";
    }

    for(l=0;l<=i;l++){
        cout<<"*";
    }
    
    cout<< endl;
}

for(i=0;i<n;i++){
    for(j=n;j>i;j--){
        cout<<"*";
    }

    for(k=0;k<(8-(2*(n-i)));k++){
        cout<<" ";
    }

    for(l=n;l>i;l--){
        cout<<"*";
    }

    cout<<endl;
}
return 0;
}