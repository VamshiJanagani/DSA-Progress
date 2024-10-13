//Input: nums = [0, 0, 3, 3, 5, 6]
//Output: [0, 3, 5, 6, _, _]
//Explanation: There are 4 distinct elements in nums and the elements marked as _ can have any value.


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int removeDuplicates(vector<int>& nums){
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j]!=nums[i]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};

int main(){
    Solution sol;
    vector<int>nums={0,0,0,3,3,5,6};
    int ans=sol.removeDuplicates(nums);
    for(int i=0;i<ans;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}