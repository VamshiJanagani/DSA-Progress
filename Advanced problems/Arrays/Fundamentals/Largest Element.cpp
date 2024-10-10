//Input: nums = [3, 3, 6, 1]
//Output: 6
//Explanation: The largest element in array is 6

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int largestElement(vector<int>& nums){
        int largest=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
        }
        return largest;
    }
};


int main(){
    Solution sol;
    vector<int>nums={3,3,6,1};
    int ans=sol.largestElement(nums);
    cout<<"Largest element in the array is "<<ans;
    return 0;
}
