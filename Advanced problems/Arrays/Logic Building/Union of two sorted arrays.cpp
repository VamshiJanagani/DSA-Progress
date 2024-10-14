//Input: nums1 = [3, 4, 6, 7, 9, 9], nums2 = [1, 5, 7, 8, 8]
//Output: [1, 3, 4, 5, 6, 7, 8, 9]
//Explanation: The element 7 is common to both, 3, 4, 6, 9 are from nums1 and 1, 5, 8 is from nums2

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2){
        //Using Two pointer approach
        int i=0,j=0;
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>unionArray;
        while(i<n1 && j<n2){
            if(nums1[i]<=nums2[j]){
                if(unionArray.size()==0 || unionArray.back()!=nums1[i]){
                    unionArray.push_back(nums1[i]);
                }
                i++;
            }
            else{
                if(unionArray.size()==0 || unionArray.back()!=nums2[j]){
                    unionArray.push_back(nums2[j]);
                }
                j++;
            }
        }
        while(j<n2){ //if i crossed its length and still we got j elements in second array
            if(unionArray.size()==0 || unionArray.back()!=nums2[j]){
                    unionArray.push_back(nums2[j]);
            }
            j++;
        }
        while(i<n1){ //j crossed its length and remaining elements were there in first array
            if(unionArray.size()==0 || unionArray.back()!=nums1[i]){
                    unionArray.push_back(nums1[i]);
            }
            i++;
        }
        return unionArray;

        //BruteForce Approach
        // set<int>st;
        // for(int i:nums1){
        //     st.insert(i);
        // }
        // for(int i:nums2){
        //     st.insert(i);
        // }
        // vector<int>unionArray;
        // for(int i:st){
        //     unionArray.push_back(i);
        // }
        // return unionArray;
    }
};


int main(){
    Solution sol;
    vector<int>nums1={3, 4, 6, 7, 9, 9};
    vector<int>nums2={1, 5, 7, 8, 8};
    vector<int>ans=sol.unionArray(nums1,nums2);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}