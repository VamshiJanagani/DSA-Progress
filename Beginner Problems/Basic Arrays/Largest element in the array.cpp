//[3,3,6,1]
//output=6

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int largest(vector<int> arr){
        int maxi=arr[0];
        int n=arr.size();
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
};


int main(){
    Solution sol;
    vector<int> arr={3,3,6,1};
    int ans=sol.largest(arr);
    cout<<"Largest in the array is "<<ans;
    return 0;
}