#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=7;
    int a[7]={3,-4,5,4,-1,7,-8};
    
    int maxSum = 0;
    for(int st=0;st<n;st++){
        int currSum=0;
        for(int end=st; end<n;end++){
            currSum +=a[end];
            maxSum=max(currSum,maxSum);
        } 
    }
    cout<<"maximum subarray sum: "<<maxSum; 
    return 0;
} 