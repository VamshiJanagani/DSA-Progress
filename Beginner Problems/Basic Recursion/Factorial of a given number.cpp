//Input : n = 5
//Output : 120
//Explanation : Factorial = 1 * 2 * 3 * 4 * 5 => 120

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    long long int factorial(int n){
        if (n<=1) return 1;
        return n * factorial(n-1);
    }
};



int main(){
    Solution sol;
    int N=4;
    int ans=sol.factorial(N);
    cout<<"The factorial of "<<N<<" is "<<ans;
    return 0;
}