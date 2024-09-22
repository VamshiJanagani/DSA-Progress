//Input : s = "hannah"
//Output : true
//Explanation : The given string when read backward is -> "hannah", which is same as when read forward.
//Hence answer is true.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPalindrome(string &s){
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};


int main(){
    string s = "hanna";  
    Solution sol;
    bool ans=sol.isPalindrome(s);
    if(ans){
        cout<<s<<" is a palindrome";
    }
    else{
        cout<<s<<" is not a palindrome";
    }
    return 0;
}