//Linear Search problem
//Input: nums = [2, 3, 4, 5, 3], target = 3
//Output: 1
//Explanation: The first occurence of 3 in nums is at index 1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int linearSearch(vector<int>& nums, int target){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};


int main(){
    Solution sol;
    vector<int>nums={2,3,4,5,3};
    int target=3;
    int ans=sol.linearSearch(nums,target);
    cout<<"Target found at index "<<ans;
    return 0;
}