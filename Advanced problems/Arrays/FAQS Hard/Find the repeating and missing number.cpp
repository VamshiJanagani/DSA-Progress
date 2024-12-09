//Input: nums = [3, 5, 4, 1, 1]
//Output: [1, 2]
//Explanation: 1 appears two times in the array and 2 is missing from nums

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums){
        long long n=nums.size();
        long long sn=(n*(n+1))/2;
        long long s2n=(n*(n+1)*(2*n+1))/6;
        long long s=0,s2=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            s2+=(long long)nums[i]*(long long)nums[i];
        }
        long long val1=s-sn;
        long long val2=s2-s2n;
        val2=val2/val1;
        long long x=(val1+val2)/2;
        long long y=x-val1;
        return {(int)x, (int)y};
    }
};

int main(){
    Solution sol;
    vector<int>nums={3,5,4,1,1};
    vector<int>ans=sol.findMissingRepeatingNumbers(nums);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}