//Input: nums = [1, 2, 5, 3, 1, 2]
//Output: [5, 3, 2]
//Explanation: 2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> leaders(vector<int>& nums) {
        vector<int>ans;
        int maxi=INT_MIN;
        int n=nums.size()-1;
        for(int i=n;i>0;i--){
            if(nums[i]>maxi){
                ans.push_back(nums[i]);
            }
            maxi=max(maxi,nums[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int>nums={1,2,5,3,1,2};
    vector<int>ans=sol.leaders(nums);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}