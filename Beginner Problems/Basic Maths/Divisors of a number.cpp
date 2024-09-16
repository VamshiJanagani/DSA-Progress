//Input: n = 8
//Output: [1, 2, 4, 8]
//Explanation: The divisors of 8 are 1, 2, 4, 8.


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>divisors(int n){
        vector<int>arr;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                arr.push_back(i);
            }
        }
        return arr;
    }
};

int main(){
    int n=8;
    Solution sol;
    vector<int>ans=sol.divisors(n);
    cout<<"Divisors of "<<n<<" in an array are ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}