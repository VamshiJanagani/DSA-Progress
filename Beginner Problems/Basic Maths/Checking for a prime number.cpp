#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
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
};



int main()
{
    int n = 8;
    
    /* Creating and instance of 
    Solution class */
    Solution sol; 
    bool ans = sol.isPrime(n);
    if (ans) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    
    return 0;
}