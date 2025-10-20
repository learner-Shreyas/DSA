#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int majorityElement(vector<int>& nums) {
        int f=0,ans=0;
        int n=nums.size();

        for(int i=0 ; i<n; i++){
            if(f == 0){
                ans= nums[i];
            }
            if(ans == nums[i]){
                f++;
            }
            else{
                f--;
            }
        }

        int count=0;
        for(int val : nums){
            if(val == ans){
                count++;
            }
        }
        if(count>n/2){
            return ans;
        }
        else{
            return -1;
        }
    return ans;
    }

    int main(){
        vector<int> nums={1,2,3,4,1};
        int a=majorityElement(nums);

        cout<<"the majority element is: "<<a<<endl;
        return 0;
    }
