//Given an integer array nums of even length consisting of an equal number of positive and negative integers.Return the answer array in such a way that the given conditions are met:
//Every consecutive pair of integers have opposite signs.
//For all integers with the same sign, the order in which they were present in nums is preserved.
//The rearranged array begins with a positive integer.

//Input : nums = [2, 4, 5, -1, -3, -4]
//Output : [2, -1, 4, -3, 5, -4]
//Explanation: The positive number 2, 4, 5 maintain their relative positions and -1, -3, -4 maintain their relative positions

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> rearrangeArray(vector<int>& nums){
        int n=nums.size();
        vector<int>ans(n,0);
        int pos=0,neg=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }
            else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
    }
};


int main(){
    vector<int>nums={2,4,5,-1,-3,-4};
    Solution sol;
    vector<int>result=sol.rearrangeArray(nums);
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}