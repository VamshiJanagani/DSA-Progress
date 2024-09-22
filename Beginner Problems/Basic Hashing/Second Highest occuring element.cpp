//Input: arr = [1, 2, 2, 3, 3, 3]
//Output: 2
//Explanation: The number 2 appears the second most (2 times) and number 3 appears the most(3 times). 
//Input: arr = [4, 4, 5, 5, 6, 7]
//Output: 6
//Explanation: Both 6 and 7 appear second most times, but 6 is smaller.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int secondHighest(vector<int> &arr){
        //Optimal hashing
        //Finding maximum element
        int maxi=arr[0];
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
        }
        //Declare hash array all zeros
        int harray[maxi+1]={0};
        //Store counts in the hash array
        for(int i=0;i<arr.size();i++){
            harray[arr[i]]++;
        }
        //Now For getting second highest array
        int maxfreq=0,secondmax=0;
        int ele1=-1,ele2=-1;
        for(int i=0;i<=maxi;i++){
            if(harray[i]>maxfreq){
                secondmax=maxfreq;
                ele2=ele1;
                maxfreq=harray[i];
                ele1=i;
            }
            else if(harray[i]>secondmax && harray[i]<maxfreq){
                secondmax=harray[i];
                ele2=i;
            }
            //Now for getting smaller if there are same both second max counts
            else if(harray[i]==secondmax && ele2>i){
                ele2=i;
            }
        }
        return ele2;
    }
};


int main(){
    Solution sol;
    vector<int>arr={4,4,5,5,6,7};
    int ans=sol.secondHighest(arr);
    cout<<"Second Highest Occuring element in the array is "<<ans;
    return 0;
}