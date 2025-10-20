//optimal algorithm for max subarray sum

#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int main()
{
    int n=7;
    int a[7]={3,-4,5,4,-1,7,-8};
    int cs=0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        cs += a[i];
        maxsum=max(cs,maxsum);
        if(cs<0){
            cs=0;
        }
    }

    cout<<"the maximum subarray sum is: "<<maxsum;
    return 0;
} 