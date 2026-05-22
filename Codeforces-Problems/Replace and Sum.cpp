#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        vector<int>arr1(n);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        vector<int>arr2(n);
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        vector<int>highest(n);
        for(int i=n-1;i>=0;i--){
            highest[i]=max(arr1[i], arr2[i]);
        }
        vector<int>final(n);
        final[n-1]=highest[n-1];
        for(int i=n-2;i>=0;i--){
            final[i]=max(final[i+1], highest[i]);
        }
        vector<int>prefix(n);
        prefix[0]=final[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+final[i];
        }
        //vector<pair<int,int>>queries(q);
        for(int i=0;i<q;i++){
            int l, r;
            cin>>l>>r;
            l--;
            r--;
            if(l==0) cout<<prefix[r]<<" ";
            else cout<<prefix[r]-prefix[l-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
