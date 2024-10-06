//Input: nums = [7, 4, 1, 5, 3]
//Output: [1, 3, 4, 5, 7]
//Explanation: 1 <= 3 <= 4 <= 5 <= 7.
//Thus the array is sorted in non-decreasing order.

//Selecting the minimum and swapping.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> selectionSort(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            int mini=i;
            //Finding the minimum element from i index to last element
            for(int j=i;j<nums.size();j++){
                if(nums[j]<nums[mini]){
                    mini=j;
                }
            }
            swap(nums[i],nums[mini]);
        }
        return nums;
    }
};

int main(){
    vector<int>nums={7,4,1,5,3};
    Solution sol;
    vector<int>sortedArr=sol.selectionSort(nums);
    for(int i:sortedArr){
        cout<<i<<" ";
    }
    return 0;
}