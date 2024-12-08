//The majority element of an array is an element that appears more than n/2 times in the array. 
//The array is guaranteed to have a majority element.

//Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]
//Output: 7
//Explanation: The number 7 appears 5 times in the 9 sized array

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int majorityElement(vector<int>& nums){
        //Optimal Solution
        //Moore's voting algorithm
        int n=nums.size();
        int ele;
        int count=0;
        for(int i=0;i<n;i++){
            if(count==0){
                ele=nums[i];
                count=1;
            }
            else if(nums[i]==ele){
                count++;
            }
            else{
                count--;
            }
        }
        return ele;
    }
};

int main(){
    vector<int>nums={7, 0, 0, 1, 7, 7, 2, 7, 7};
    Solution sol;
    int ans=sol.majorityElement(nums);
    cout<<"Majority element is "<<ans;
    return 0;
}
