#include<iostream>
#include<vector>
using namespace std;


int main(){
    int target=12;
    vector<int> vec={1,5,7,3,13,24};
   
    for(int i:vec){
        if(i==target){
            cout<<"the number is present ";
            return 0;
        }
    }
    cout<<"the number is not present";
    
    return 0;
}