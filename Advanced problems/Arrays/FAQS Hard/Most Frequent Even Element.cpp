//Leetcode 2404
//Given an integer array nums, return the most frequent even element.
//If there is a tie, return the smallest one. If there is no such element, return -1.

//Input: nums = [0,1,2,2,4,4,1]
//Output: 2
//Explanation:
//The even elements are 0, 2, and 4. Of these, 2 and 4 appear the most.
//We return the smallest one, which is 2.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int mostFrequentEven(vector<int>& nums){
        int n=nums.size();
        int count=0;
        int most=-1;
        unordered_map<int,int>mpp;
        //Storing even elements and their counts in the map
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0) continue;
            mpp[nums[i]]++;
        }
        //now traversing and finding out the most count with small number
        for(auto &pair:mpp){
            if(pair.second>count || (pair.second==count && pair.first<most)){
                count=pair.second;
                most=pair.first;
            }
        } 
        return most;
    }
};

int main(){
    Solution sol;
    vector<int>nums={0,1,2,2,4,4,1};
    int ans=sol.mostFrequentEven(nums);
    cout<<"Most frequent element in the array is "<<ans;
    return 0;
}