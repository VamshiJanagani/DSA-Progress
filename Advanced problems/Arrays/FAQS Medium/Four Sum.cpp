//Input: nums = [1, -2, 3, 5, 7, 9], target = 7
//Output: [[-2, 1, 3, 5]]

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> fourSum(vector<int>& nums, int target){
        int n=nums.size();
        //Optimal Solution
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum<target) k++;
                    else if(sum>target) l--;
                    else{
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                }
            }
        }
        return ans;
    }
};


int main(){
    Solution sol;
    vector<int>nums={1, 1, 3, 4, -3};
    int target=5;
    vector<vector<int>>ans=sol.fourSum(nums,target);
    for(auto row: ans){
        cout<<"[ ";
        for(auto i:row){
            cout<<i<<" ";
        }
        cout<<"]";
    }
    cout<<"\n";
    return 0;
}