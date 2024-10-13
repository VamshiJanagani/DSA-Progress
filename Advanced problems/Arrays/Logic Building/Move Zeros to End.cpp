//Input: nums = [0, 1, 4, 0, 5, 2]
//Output: [1, 4, 5, 2, 0, 0]
//Explanation: Both the zeroes are moved to the end and the order of the other elements stay the same

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void moveZeroes(vector<int>& nums){
        //Optimal approach , two pointer 
        int j=-1;
        //Finding the first 0th index
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if (j == -1) return;
        //Now comparing both i and j elements
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }

        
        // //Brute Force approach
        // vector<int>temp; //Creating temp array
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=0){
        //         temp.push_back(nums[i]);
        //     }
        // }//stored non zero elememts in temp array
        // for(int i=0;i<temp.size();i++){
        //     nums[i]=temp[i];
        // }//Restoring back non zero elements in original array
        // for(int i=temp.size();i<nums.size();i++){
        //     nums[i]=0;
        // }//storing zeros at the end of the array
    }
};

int main(){
    vector<int>nums={0,1,4,0,5,2};
    Solution sol;
    sol.moveZeroes(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}