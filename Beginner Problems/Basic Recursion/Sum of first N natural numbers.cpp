//Input : N = 4
//Output : 10
//Explanation : first four natural numbers are 1, 2, 3, 4.
//Sum is 1 + 2 + 3 + 4 => 10.


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int sumofNumbers(int n){
        if ( n==0 ) return 0;
        return n + sumofNumbers(n-1);
    }
};

int main(){
    Solution sol;
    int n=10;
    int ans=sol.sumofNumbers(n);
    cout<<"Sum of first "<<n<<" numbers is "<<ans;
    return 0;
}