#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
    long long perfOpAndgetMax(int num, vector<int>& arr){
        set<long long>s;
        set<long long>another;
        long long maxEl=0,anothermax=0;
        for(int i:arr){
            long long sum=i+num;
            long long sum2=i-num;
            s.insert(sum);
            another.insert(sum2);
            maxEl=max(maxEl,sum);
            anothermax=max(anothermax,sum2);
        }
        long long firstsmall=maxEl+1, secsmall=anothermax+1;
        for(long long i=0;i<=maxEl;i++){
            if(!s.count(i)){
                firstsmall=i;
                break;
            }
        }
        for(long long i=0;i<=anothermax;i++){
            if(!another.count(i)){
                secsmall=i;
                break;
            }
        }
        return max(firstsmall, secsmall);
    }
    public:
    long long getMex(vector<int>& arr, int n){
        
        long long smallest=0;
        sort(arr.begin(),arr.end());
        smallest=max(smallest,perfOpAndgetMax(arr[0],arr));
        smallest=max(smallest,perfOpAndgetMax(arr[n-1],arr));
        return smallest;
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
        long long ans=sol.getMex(arr,n);
        cout<<ans<<endl;
    }
    return 0;
}
