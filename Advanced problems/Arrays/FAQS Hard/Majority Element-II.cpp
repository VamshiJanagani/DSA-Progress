//Given an integer array nums of size n. 
//Return all elements which appear more than n/3 times in the array. 
//The output can be returned in any order.
//Input: nums = [1, 2, 1, 1, 3, 2, 2]
//Output: [1, 2]
//Explanation: Here, n / 3 = 7 / 3 = 2.
//Therefore the elements appearing 3 or more times is : [1, 2]

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> majorityElementTwo(vector<int>& nums){
        //Optimal approach
        //Moores voting algorithm with slight modifications
        int n=nums.size();
        int count1=0,count2=0,ele1,ele2;
        for(int i=0;i<n;i++){
            if(count1==0 && nums[i]!=ele2){
                count1=1;
                ele1=nums[i];
            }
            else if(count2==0 && nums[i]!=ele1){
                count2=0;
                ele2=nums[i];
            }
            else if(nums[i]==ele1){
                count1++;
            }
            else if(nums[i]==ele2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        //Now checking again
        int cnt1=0,cnt2=0;
        vector<int>temp;
        int mini=n/3 +1;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1) cnt1++;
            if(nums[i]==ele2) cnt2++;
        }
        if(cnt1>=ele1) temp.push_back(ele1);
        if(cnt2>=ele2) temp.push_back(ele2);
        return temp;
    }
};

int main(){
    Solution sol;
    vector<int>nums={1, 2, 1, 1, 3, 2, 2};
    vector<int>ans=sol.majorityElementTwo(nums);
    cout<<"Majority elements are ";
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}
