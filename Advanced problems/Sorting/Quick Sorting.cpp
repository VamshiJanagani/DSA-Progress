//Input: nums = [7, 4, 1, 5, 3]
//Output: [1, 3, 4, 5, 7]
//Explanation: 1 <= 3 <= 4 <= 5 <= 7.
//Thus the array is sorted in non-decreasing order.

//In quick sorting, we select a pivot element(any random element, first,last median)
//and place it in its correct position
//Then smaller than pivot ->left of pivot 
//Greater than pivot ->right of pivot

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    int quickiefun(vector<int>&nums,int low, int high){
        int pivot=nums[low]; //selecting first element as pivot element
        int i=low; //index for finding the element greater than pivot
        int j=high; //index for finding the element smaller than pivot
        while(i<j){
            while(nums[i]<=pivot && i<=high-1){ 
                i++;
            }
            while(nums[j]>pivot && j>=low+1){
                j--;
            }
            if(i<j){
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[low],nums[j]); //j crossed i so, swapping the pivot element with j
        return j;
    }
    private:
    void quickSortHelper(vector<int>& nums, int low, int high){
        if(low<high){
            int partition=quickiefun(nums,low,high); //function for finding the pivot element
            quickSortHelper(nums,low,partition-1);
            quickSortHelper(nums,partition+1,high);
        }
    }
    public:
    vector<int>quickSort(vector<int>& nums){
        quickSortHelper(nums,0,nums.size()-1);
        return nums;
    }
};


int main(){
    Solution sol;
    vector<int>nums={7,4,1,5,3};
    vector<int>ans=sol.quickSort(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}