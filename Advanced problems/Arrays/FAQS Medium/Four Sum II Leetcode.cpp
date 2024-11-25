//Input: nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
//Output: 2
//Explanation:
//The two tuples are:
//1. (0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 + (-2) + (-1) + 2 = 0
//2. (1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 + (-1) + (-1) + 0 = 0

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4){
        int n=nums1.size();
        unordered_map<int,int>sc;
        for(auto i:nums1){
            for(auto j:nums2){
                sc[i+j]++;
            }
        }
        int count=0;
        for(auto i:nums3){
            for(auto j:nums4){
                count+=sc[-(i+j)];
            }
        }
        return count;
    }
};

int main(){
    Solution sol;
    vector<int>nums1 = {1,2};
    vector<int>nums2 = {-2,-1};
    vector<int>nums3 = {-1,2}; 
    vector<int>nums4 = {0,2};
    int ans=sol.fourSumCount(nums1,nums2,nums3,nums4);
    cout<<"No.of tuples/quadruples that add up to zero are "<<ans;
}