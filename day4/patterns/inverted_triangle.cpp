#include<iostream>
using namespace std;

int main(){
    int n,i,j,k;
    cout<< "enter the value of n";
    cin>>n;
    int num=1;
for(i=0;i<n;i++){
    for(j=0;j<i;j++){
        cout<<" ";
    }
    for(j=0;j<n-i;j++){
        cout<<(i+1);
    }
    cout<<endl;
}

return 0;
}