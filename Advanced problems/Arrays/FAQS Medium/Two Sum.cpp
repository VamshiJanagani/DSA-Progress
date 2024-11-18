//Input: nums = [1, 6, 2, 10, 3], target = 7
//Output: [0, 1]
//Explanation: nums[0] + nums[1] = 1 + 6 = 7

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        //Optimal Solution using hash map
        vector<int>ans;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int b=target-a;
            if(mpp.find(b)!=mpp.end()){
                ans.push_back(mpp[b]); 
                ans.push_back(i);
            }
            mpp[nums[i]]=i;
        }
        return ans;
    }
};

int main(){
    vector<int>nums={-6, 7, 1, -7, 6, 2};
    int target=3;
    Solution sol;
    vector<int>ans=sol.twoSum(nums, target);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}