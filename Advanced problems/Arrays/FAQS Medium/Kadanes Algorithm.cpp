//Input: nums = [2, 3, 5, -2, 7, -4]
//Output: 15
//Explanation: The subarray from index 0 to index 4 has the largest sum = 15
//This kadane's algorithm works only if the output should be greater than 0(or only positives)
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxSubArray(vector<int>& nums) {
        int larg=INT_MIN;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<0){
                sum=0;
            }
            if(sum>larg){
                larg=sum;
            }
        }
        return larg;
    }
};

int main(){
    Solution sol;
    vector<int>nums={2,3,5,-2,7,-4};
    int ans=sol.maxSubArray(nums);
    cout<<"Sum of maximum sub array is "<<ans;
    return 0;
}