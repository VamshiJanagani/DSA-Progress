#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPerfect(int n){
        int perfect=0;
        for(int i=1;i<n;i++){
            if(n%i==0){
                perfect=perfect+i;            }
        }
        return (perfect==n);
    }
};


int main(){
    int n=28;
    Solution sol;
    bool ans=sol.isPerfect(n);
    if(ans){
        cout<<n<<" is Perfect number";
    }
    else{
        cout<<n<<" is not a perfect number";
    }
    return 0;
}