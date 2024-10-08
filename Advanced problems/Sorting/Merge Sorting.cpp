//Input: nums = [7, 4, 1, 5, 3]
//Output: [1, 3, 4, 5, 7]
//Explanation: 1 <= 3 <= 4 <= 5 <= 7.
//Thus the array is sorted in non-decreasing order.

//Divide(until single element) and merge

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    void mergeFunc(vector<int>& nums,int low, int mid, int high){
        vector<int>temp; //creating a temp array to store the elements while merging and sorting
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]); //if left side element is less than right side array element
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){ //storing leftover elements of left array if any
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){ //storing leftover elements of right array if any
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low]; //storing temp values in nums array
        }
    }
    private:
    void mergeSortHelper(vector<int>& nums, int low, int high){
        if(low>=high){
            return;
        }
        int mid=(low+high)/2;
        mergeSortHelper(nums,low,mid); //Recursive calls of left side dividing
        mergeSortHelper(nums,mid+1,high); //Recursive calls of right side dividing
        mergeFunc(nums,low,mid,high); //merging both
    }
    public:
    vector<int> mergeSort(vector<int>& nums){
        mergeSortHelper(nums,0,nums.size()-1);
        return nums;
    }
};


int main(){
    Solution sol;
    vector<int>nums={7,4,1,5,3};
    vector<int>ans=sol.mergeSort(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}