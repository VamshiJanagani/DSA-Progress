//Input: n1 = 4, n2 = 6
//Output: 12
//Explanation: 4 * 3 = 12, 6 * 2 = 12.
//12 is the lowest integer that is divisible both 4 and 6.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
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
    public:
    int lcm(int n1,int n2){
        int lcm=(n1*n2)/gcd(n1,n2);
        return lcm;
    }
};


int main(){
    int n1=4, n2=12;
    Solution sol;
    int ans=sol.lcm(n1,n2);
    cout<<"LCM of "<<n1<<" and "<<n2<<" is "<<ans;
    return 0;
}