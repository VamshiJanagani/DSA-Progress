//Input: nums = [7, 4, 1, 5, 3]
//Output: [1, 3, 4, 5, 7]
//Explanation: 1 <= 3 <= 4 <= 5 <= 7.
//Thus the array is sorted in non-decreasing order.

//Pushing maximum element to the last index in each iteration
//by performing adjacent swapping

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> bubbleSort(vector<int>& nums){
        for(int i=nums.size()-1;i>=1;i--){
            int didSwap=0; //For best time complexity ( already sorted )
            for(int j=0;j<i;j++){
                if(nums[j]>nums[j+1]){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                    didSwap=1; // if swapping happens
                }
            }
            if(didSwap=0){
                break;
            }
        }
        return nums;
    }
};

int main(){
    Solution sol;
    vector<int>nums= {7,4,1,5,3};
    vector<int>ans=sol.bubbleSort(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}
