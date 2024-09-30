//Input : nums = [1, 2, 3, 4, 5]
//Output : [5, 4, 3, 2, 1]

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    void reversing(int left, int right, vector<int>& n){
        if(left>=right) return;
        swap(n[left],n[right]);
        return reversing(left+1,right-1,n);
    }
    public:
    vector<int> reverseArray(vector<int>& nums){
        reversing(0,nums.size()-1,nums);
        return nums;
    }
};


int main(){
    Solution sol;
    vector<int> nums={1,2,3,4,5};
    vector<int>ans=sol.reverseArray(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}