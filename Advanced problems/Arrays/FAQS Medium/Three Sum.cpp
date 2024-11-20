//Given an integer array nums.Return all triplets such that:
//i != j, i != k, and j != k
//nums[i] + nums[j] + nums[k] == 0.
//Notice that the solution set must not contain duplicate triplets. One element can be a part of multiple triplets. The output and the triplets can be returned in any order.

//Input: nums = [2, -2, 0, 3, -3, 5]
//Output: [[-2, 0, 2], [-3, -2, 5], [-3, 0, 3]]
//Explanation: nums[1] + nums[2] + nums[0] = 0
//nums[4] + nums[1] + nums[5] = 0
//nums[4] + nums[2] + nums[3] = 0

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> threeSum(vector<int>& nums){
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int>nums={2,-2,0,3,-3,5};
    vector<vector<int>>ans=sol.threeSum(nums);
    for(auto &triplet:ans){
        cout<<"[";
        for(auto &i:triplet){
            cout<<i<<" ";
        }
        cout<<"]";
    }
    return 0;
}