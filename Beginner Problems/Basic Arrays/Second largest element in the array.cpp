//[8,8,7,6,5]
//output: 7

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int secondLargest(vector<int> arr){
        int larg=arr[0], sec=-1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>larg){
                sec=larg;
                larg=arr[i];
            }
            else if(arr[i]>sec && arr[i]<larg){
                sec=arr[i];
            }
        }
        return sec;
    }
};


int main(){
    Solution sol;
    vector<int> arr={8,8,7,6,5};
    int ans=sol.secondLargest(arr);
    cout<<"Second largest element in the array is "<<ans;
    return 0;
}