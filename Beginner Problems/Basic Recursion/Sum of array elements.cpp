//Input : nums = [1, 2, 3]
//Output : 6
//Explanation : The sum of elements of array is 1 + 2 + 3 => 6.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    int arraySumHelper(vector<int>& nums, int index){
        if(index>=nums.size()) return 0;
        return nums[index]+arraySumHelper(nums,index+1);
    }
    public:
    int arraySum(vector<int>& nums){
        return arraySumHelper(nums,0);
    }
};


int main(){
    vector<int>nums={1,2,3};
    Solution sol;
    int result=sol.arraySum(nums);
    cout<<"Sum of array elements is "<<result;
    return 0;
}