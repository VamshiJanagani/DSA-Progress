//Input: n = 6
//Output: 3
//Explanation: Prime numbers in the range [1, 6] are 2, 3, 5.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    bool isPrime(int n){
    if(n==0 || n==1){
        return false;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false; 
            }
        }
        return true;
    }
}
    public:
    int primeNumbers(int n){
        int count=0;
        for(int i=1;i<=n;i++){
            if(isPrime(i)){
                count+=1;
            }
        }
        return count;
    }
};


int main(){
    int n=20;
    Solution sol;
    int ans=sol.primeNumbers(n);
    cout<<"Count of prime numbers till "<<n<<" are "<<ans;
    return 0;
}