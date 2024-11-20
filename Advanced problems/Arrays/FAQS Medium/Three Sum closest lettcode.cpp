//Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
//Return the sum of the three integers.

//Input: nums = [-1,2,1,-4], target = 1
//Output: 2
//Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int threeSumClosest(vector<int>& nums, int target){
        int n=nums.size();
        int closest=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int currentSum=nums[i]+nums[j]+nums[k];
                if(abs(currentSum-target)<abs(closest-target)){
                    closest=currentSum;
                }
                if(currentSum<target){
                    j++;
                }
                else if(currentSum>target){
                    k--;
                }
                else{
                    return currentSum;
                }
            }
        }
        return closest;
    }
};

int main(){
    Solution sol;
    vector<int>nums={0,0,0};
    int target=1;
    int ans=sol.threeSumClosest(nums,target);
    cout<<"Sum that is closest to the target "<<ans;
    return 0;
}