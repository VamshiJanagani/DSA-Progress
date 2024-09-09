//Input: n=5, arr = [1,2,3,4,5]
//Output: 15

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int sumofarray(int arr[], int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        return sum;
    }
};

int main(){

    Solution sol;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=sol.sumofarray(arr,n);
    cout<<"Sum of array of elements is "<<ans;
    return 0;

}