//Input: n = 5, arr = [1,2,3,4,5]
//Output: True
//Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isArraySorted(int arr[], int n){
        //Optimal
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                return false;
            }
        }
        return true;
    }
};


int main(){
    int arr[]={1,2,3,6,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    Solution sol;
    bool ans=sol.isArraySorted(arr,n);
    // if(ans){ cout<<"Array is sorted";}
    // else{
    // cout<<"Array is not sorted";
    // }
    cout<<"Is Array Sorted ? "<<(ans ? "True":"False");
    return 0;
}