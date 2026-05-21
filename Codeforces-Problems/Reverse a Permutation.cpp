#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> getVector(vector<int>& arr, int n){
        map<int,int, greater<int>>mp;
        //max element ->index
        for(int i=0;i<n;i++){
            mp[arr[i]]=i;
        }
        int index=0;
        for(auto i:mp){
            if(i.second==index){
                index++;
            }
            else{
                reverse(arr.begin()+index, arr.begin()+i.second+1);
                break;
            }
        }
        return arr;
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
        vector<int>ans=sol.getVector(arr, n);
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
