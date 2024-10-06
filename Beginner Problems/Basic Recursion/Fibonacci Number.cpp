//Input : n = 3
//Output : 2
//Explanation : F(3) = F(2) + F(1) => 1 + 1 => 2.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1)+fib(n-2);
    }
};

int main(){
    Solution sol;
    int n=6;
    int ans=sol.fib(n);
    cout<<"Output: "<<ans;
    return 0;
}