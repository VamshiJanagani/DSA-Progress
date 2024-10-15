//Input: nums1 = [1, 2, 2, 3, 5], nums2 = [1, 2, 7]
//Output: [1, 2]
//Explanation: The elements 1, 2 are the only elements present in both nums1 and nums2

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2){
        int i=0,j=0;
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>inter;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums2[j]<nums1[i]){
                j++;
            }
            else{
                inter.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return inter;
    }
};


int main(){
    Solution sol;
    vector<int>nums1={-45, -45, 0, 0, 2};
    vector<int>nums2={-50, -45, 0, 0, 5, 7};
    vector<int>ans=sol.intersectionArray(nums1,nums2);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}