#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        vector<int>arr(7);
        int maxi = INT_MIN;
        int index = -1;
        for(int i=0;i<7;i++){
            cin>>arr[i];
            if(arr[i] > maxi){
                maxi = arr[i];
                index = i;
            }
        }
        int sum = 0;
        for(int i=0;i<7;i++){
            if(index==i){
                sum+=arr[i];
            }
            else{
                sum+=(-1*arr[i]);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
