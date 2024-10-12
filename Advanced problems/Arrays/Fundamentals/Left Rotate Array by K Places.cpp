//Input: nums = [1, 2, 3, 4, 5, 6], k = 2
//Output: nums = [3, 4, 5, 6, 1, 2]
//Explanation: rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
//rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    void reverse(vector<int>& nums,int left, int right){
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
    public:
    void rotateArray(vector<int>& nums, int k){
        int n=nums.size();
        k=k%n;
        //Optimal approach
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        reverse(nums,0,n-1);

        //Brute Force
        // //Now storing the first k elements in temp array
        // vector<int>temp;
        // for(int i=0;i<k;i++){
        //     temp.push_back(nums[i]);
        // }
        // //Now shifting nums array to the front
        // for(int i=k;i<n;i++){
        //     nums[i-k]=nums[i];
        // }
        // //Now adding the temp array elements to the back of the original array
        // for(int i=n-k;i<n;i++){
        //     nums[i]=temp[i-(n-k)];
        // }
    }
};


int main(){
    Solution sol;
    vector<int>nums={1,2,3,4,5,6};
    int k=2;
    sol.rotateArray(nums,k);
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}