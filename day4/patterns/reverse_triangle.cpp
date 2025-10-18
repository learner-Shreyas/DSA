#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<< "enter the value of n";
    cin>>n;
    

for(i=0;i<n;i++){
    
    for(j=i;j>=0;j--){
        cout<< j+1;
    }
    cout<< endl;
}

}