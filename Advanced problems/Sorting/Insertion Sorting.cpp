//Input: nums = [7, 4, 1, 5, 3]
//Output: [1, 3, 4, 5, 7]
//Explanation: 1 <= 3 <= 4 <= 5 <= 7.
//Thus the array is sorted in non-decreasing order.

//Take the element and place it in its correct position in each iteration.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> insertionSort(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            int j=i;
            while(j>0 && nums[j-1]>nums[j]){
                swap(nums[j-1],nums[j]);
                j--;
            }
        }
        return nums;
    }
};


int main(){
    Solution sol;
    vector<int> nums={7,4,1,2,3,4};
    vector<int> ans=sol.insertionSort(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}