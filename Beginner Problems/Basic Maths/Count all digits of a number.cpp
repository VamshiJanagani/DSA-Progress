#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to count all digits in n
    int countDigit(int n) {
        // Edge case
        if(n == 0) return 1;
        
        // Set counter to 0
        int cnt = 0;
        
        // Iterate until n is greater than zero
        while(n > 0) {
            //Extract last digit
            int lastDigit = n % 10; 
            
            // Increment count of digits
            cnt = cnt + 1; 
            n = n / 10;
        }
        
        return cnt;
    }
};

int main()
{
    int n = 6678;
    
    /* Creating and instance of 
    Solution class */
    Solution sol; 
    
    // Function call to get count of digits in n
    int ans = sol.countDigit(n);
    cout << "The count of digits in the given number is:" << ans;
    
    return 0;
}