//Input: arr = [1, 2, 2, 3, 3, 3]
//Output: 3
//Input: arr = [4, 4, 5, 5, 6]
//Output: 4
//Explanation: Both 4 and 5 appear twice, but 4 is smaller. So, 4 is the most frequent element.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int highestOccuring(vector<int>& arr){
        //Optimal Approach hashing
        //Finding the maximum element
        int n=arr.size();
        int maxi=arr[0];
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        //Declaring hash array
        int hbdarray[maxi+1]={0};
        //Now filling up the hash array with the count
        for(int i=0;i<n;i++){
            hbdarray[arr[i]]++;
        }
        //Now traversing through that hash array and finding the most occured element
        int maxCount=0, ele=-1;
        //Below function also satisfies the second testacse
        for(int i=0;i<=maxi;i++){
            if(hbdarray[i]>maxCount){
                maxCount=hbdarray[i];
                ele=i;
            }
        }
        return ele;
    }
};


int main(){
    vector<int>arr={10,9,3};
    Solution sol;
    int ans=sol.highestOccuring(arr);
    cout<<"Most occuring element in this array is "<<ans;
    return 0;
}