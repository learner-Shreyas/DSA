#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<< "enter the value of n";
    cin>>n;
    
    
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<< " ";
        }
        cout<<"*";
        if(i!=0){
                for(j=0;j<2*i-1;j++){
                    cout<<" ";
                }
                cout<<"*";
            }
    cout<< endl;
}

    for(i=0;i<n-1;i++){
        for(j=i+1;j>0;j--){
            cout<<" ";
        }
        cout<<"*";

        if(i!=n-2){
            for(j=0;j<(2*(n-i)-5);j++){
                cout<< " ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

}