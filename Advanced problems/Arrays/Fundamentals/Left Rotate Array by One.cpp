//Input: nums = [1, 2, 3, 4, 5]
//Output: [2, 3, 4, 5, 1]
//Explanation: Initially, nums = [1, 2, 3, 4, 5]
//Rotating once to left -> nums = [2, 3, 4, 5, 1]

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void rotateArrayByOne(vector<int>& nums){
        int temp=nums[0]; //temp variable to store first value
        for(int i=0;i<nums.size()-1;i++){
            nums[i]=nums[i+1];
        }
        nums[nums.size()-1]=temp;
    }
};

int main(){
    Solution sol;
    vector<int>nums={1,2,3,4,5};
    sol.rotateArrayByOne(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}