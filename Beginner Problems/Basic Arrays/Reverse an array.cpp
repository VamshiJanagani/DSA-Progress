//Input: n=5, arr = [1,2,3,4,5]
//Output: [5,4,3,2,1]
//Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void reverseArray(int arr[], int n){
        //Using Two-pointer approach
        int left=0;
        int right=n-1;
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        return;
    }
};

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    
    int arr[]={1,2,3,4,5};
    //int n=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    Solution sol;
    cout<<"Original Array is ";
    printArray(arr,n);

    sol.reverseArray(arr,n);
    cout<<"Reversed Array is ";
    printArray(arr,n);
    return 0;
    
}