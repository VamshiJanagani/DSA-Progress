//Input: n = 2, Output: 2
//input n=0, output= 1
//input n=3 , output= 6

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int factorial(int n){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        return fact;
    }
};



int main(){
    int n=5;
    Solution sol;
    int ans=sol.factorial(n);
    cout<<"Factorial of "<<n<<" is "<<ans;
    return 0;
}