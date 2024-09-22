//Input: arr = [4, 4, 5, 5, 6]
//Output: 3
//Explanation: The highest frequency is 2 (elements 4 and 5), and the lowest frequency is 1 (element 6). Their sum is 2 + 1 = 3.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int sumofHighandLow(vector<int> &arr){
        //Finding maximum element in the array
        int maxi=arr[0];
        int n=arr.size();
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        //Declaring hash array
        int harray[maxi+1]={0};
        //Storing counts
        for(int i=0;i<n;i++){
            harray[arr[i]]++;
        }
        int maxfreq=0;
        int minfreq=n;
        for(int i=0;i<=maxi;i++){
            //If the count is 0 means, that element doesn't exist, so we should  write a function
            //only if its not equal not zero
            if(harray[i]!=0){
                maxfreq=max(maxfreq,harray[i]);
                minfreq=min(minfreq,harray[i]);
            }
        }
        return maxfreq+minfreq;
    }
};


int main(){
    Solution sol;
    vector<int>arr={4,4,5,5,6};
    int ans=sol.sumofHighandLow(arr);
    cout<<"Sum of highest and lowest freq in this array is "<<ans;
    return 0;
}