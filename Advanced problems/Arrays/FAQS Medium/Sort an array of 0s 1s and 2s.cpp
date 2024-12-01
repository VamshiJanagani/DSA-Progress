//Input: nums = [1, 0, 2, 1, 0]
//Output: [0, 0, 1, 1, 2]
//Explanation: The nums array in sorted order has 2 zeroes, 2 ones and 1 two

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void sortZeroOneTwo(vector<int>& nums){
        //Dutch National Flag algorithm
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};


int main(){
    Solution sol;
    vector<int>nums={1,0,2,1,0};
    sol.sortZeroOneTwo(nums);
    cout<<"[ ";
    for(auto i:nums){
        cout<<i<<" ";
    }
    cout<<"]";
    return 0;
}

