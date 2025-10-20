#include<iostream>
#include<vector>
using namespace std;

vector<int> pair_sum(vector<int> nums,int target){
    vector<int> ans;
    int n=nums.size();
    int i=0,j=n-1,ps=0;
    while(i<j){
        ps=nums[i]+nums[j];
        if(ps>target){
            j--;
        }
        else if(ps<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
    }
    return ans;
}
int main()
{
    vector<int> nums={2,7,11,15};
    int target=26;

    vector<int> ans =pair_sum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
} 