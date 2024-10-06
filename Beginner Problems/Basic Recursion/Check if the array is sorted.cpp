//Input : nums = [1, 2, 3, 4, 5]
//Output : true

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    bool isSortedHelper(vector<int>& nums,int index){
        if(index>=nums.size()-1){
            return true;
        }
        //Checking if current character is greater than the next
        if(nums[index]>nums[index+1]){
            return false;
        }
        return isSortedHelper(nums,index+1);
    }
    public:
    bool isSorted(vector<int>& nums){
        return isSortedHelper(nums,0);
    }
};

int main(){
    Solution sol;
    vector<int>nums={1,7,3,4,5};
    bool ans=sol.isSorted(nums);
    if(ans){
        cout<<"The given array is sorted";
    }
    else{
        cout<<"Its not sorted";
    }
    return 0;
}