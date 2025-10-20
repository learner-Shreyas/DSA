#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &vec) {
    int start=0;
    int sz=vec.size();
    int end=sz-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}

int main(){
    
    vector<int> vec{1,2,3,4,5};
    cout<<"the elements of vector before reversing:";
    for(int i:vec){
        cout<<i<<"\t";
    }
    cout<<endl;
    reverse(vec);

    cout<<"the elements of vector after reversing:";
    for(int i:vec){
        cout<<i<<"\t";
    }
    cout<<endl;
    return 0;
}