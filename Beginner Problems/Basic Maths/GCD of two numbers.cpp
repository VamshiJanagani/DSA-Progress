//Input: n1 = 4, n2 = 6
//Output: 2
//Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6
//Greatest Common divisor = 2.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int Gcd(int n1,int n2){
        while(n1 !=0 && n2!=0){
            if(n1>n2){
                n1=n1%n2;
            }
            else{
                n2=n2%n1;
            }
        }
        if(n1==0) return n2;
        return n1;
    }
};


int main(){
    int n1=6, n2=12;
    Solution sol;
    int ans=sol.Gcd(n1,n2);
    cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<ans;
    return 0;
}