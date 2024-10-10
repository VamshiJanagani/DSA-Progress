//Input: nums = [1, 1, 0, 0, 1, 1, 1, 0]
//Output: 3
//Explanation: The maximum consecutive 1s are present from index 4 to index 6, amounting to 3 1s

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxCount(vector<int>& nums){
        int count=0;
        int maxic=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                maxic=max(count,maxic);
            }
            else{
                count=0;
            }
        }
        return maxic;
    }
};


int main(){
    Solution sol;
    vector<int>nums={1, 1, 0, 0, 1, 1, 1, 0};
    int ans=sol.maxCount(nums);
    cout<<"Maxiumum consecutive counts of 1s is "<<ans;
    return 0;
}