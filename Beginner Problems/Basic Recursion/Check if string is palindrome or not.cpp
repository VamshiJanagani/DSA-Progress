//Input : s = "hannah"
//Output : true

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    void reverseStringHelper(int l, int r, string& s){
        if(l>=r) return;
        swap(s[l],s[r]);
        return reverseStringHelper(l+1,r-1,s);
    }
    public:
    bool palindromeCheck(string& s){
        string s1=s;
        int left=0;
        int right=s.size()-1;
        reverseStringHelper(left,right,s);
        return (s==s1);
    }
};


int main(){
    string s="hannah";
    Solution sol;
    bool ans=sol.palindromeCheck(s);
    if(ans){
        cout<<"Yes, the given string "<<s<<" is  a palindrome";
    }else{
    cout<<"No, the string "<<s<<" is not a palindrome";
    }
}