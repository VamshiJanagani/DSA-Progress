//Input : num = 5
//Output : true

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    bool isPrime(int n,int i){
        if(i>=n) return true;
        if(n%i==0) return false;
        return isPrime(n,i+1);
    }
    public:
    bool checkPrime(int num){
         return isPrime(num,2);
    }
};


int main(){
    Solution sol;
    int num=41;
    bool ans=sol.checkPrime(num);
    if(ans){
        cout<<num<<" is a prime number";
    }
    else{
        cout<<num<<" is not a prime number";
    }
}