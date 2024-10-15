//Input: nums1 = [1,2,2,1], nums2 = [2,2]
//Output: [2]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        vector<int>inter;
        for(auto i:nums1){
            st.insert(i);
        } //converted firts array into a set
        for(auto i:nums2){
            if(st.count(i)){ //returns 1 if present , 0 if not , checking num2 elements are in set or not
                inter.push_back(i); //if they are present, insert into resulting vector
                st.erase(i); //and remove from the set to avoid duplicates
            }
        }
        return inter;
    }
};

int main(){
    Solution sol;
    vector<int>nums1={1,2,2,1};
    vector<int>nums2={2,2};
    vector<int>ans=sol.intersection(nums1,nums2);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}