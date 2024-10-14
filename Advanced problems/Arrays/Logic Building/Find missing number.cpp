//Input: nums = [0, 2, 3, 1, 4]
//Output: 5
//Explanation: nums contains 0, 1, 2, 3, 4 thus leaving 5 as the only missing number in the range [0, 5]


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int missingNumber(vector<int>& nums){
        int xor1=0;
        int xor2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            xor2=xor2 ^ nums[i];
            xor1= xor1 ^ i;
        }
        xor1= xor1 ^ n;
        return xor2 ^ xor1 ;
    }
};


int main(){
    Solution sol;
    vector<int>nums={0,2,3,1,4};
    int ans=sol.missingNumber(nums);
    cout<<"the missing number is "<<ans;
    return 0;
}