#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPossible(vector<int>& arr, int n, int s, int x){
        int sum=0;
        for(int i:arr){
            sum+=i;
        }
        if(sum>s) return false;
        int i=0;
        while(true){
            int req=(sum+i*x);
            if(req==s) return true;
            else if(req>s) return false;
            i++;
        }
        return false;
    }
};

int main() {
	// your code goes here
    int t;
    cin>>t;
    Solution sol;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool ans=sol.isPossible(arr, n, s, x);
        if(ans){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
