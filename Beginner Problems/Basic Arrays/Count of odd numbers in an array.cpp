//Input: n=5, array = [1,2,3,4,5]
//Output: 3
//Explanation: The three odd elements are (1,3,5).

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countofOdd(int arr[],int n){
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                count+=1;
            }
        }
        return count;
    }
};


int main(){
    Solution sol;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=sol.countofOdd(arr,n);
    cout<<"The count of odd numbers in array is "<<ans;
    return 0;
}