//Input: nums = [8, 8, 7, 6, 5]
//Output: 7
//Explanation: The largest value in nums is 8, the second largest is 7

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int secondLargest(vector<int>& nums){
        int largest=nums[0];
        int seclargest=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>largest){
                seclargest=largest;
                largest=nums[i];
            }
            if(nums[i]<largest && nums[i]>seclargest){
                seclargest=nums[i];
            }
        }
        return seclargest;
    }
};

int main(){
    Solution sol;
    vector<int>nums={8,8,7,6,5};
    int ans=sol.secondLargest(nums);
    cout<<"Second largest element in the array is "<<ans;
    return 0;
}