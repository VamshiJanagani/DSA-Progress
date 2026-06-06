#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int getMax(vector<int>& arr, int n){
        int maxi=INT_MIN;
        for(int i:arr){
            maxi=max(maxi,i);
        }
        return maxi*n;
    }
};


int main() {
	// your code goes here
    int t;
    cin>>t;
    Solution sol;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=sol.getMax(arr,n);
        cout<<ans<<endl;
    }
    return 0;
}
