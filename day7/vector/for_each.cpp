#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec={1,3,2,4,5};
    vector<int> vec1(5,10);
    
    cout<< vec[0]<<endl;
    
    for(int i:vec1){
        cout<< i <<endl;
    }
    return 0;
}