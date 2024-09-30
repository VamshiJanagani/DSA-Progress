//The given string is s = "hello" and after reversing it becomes s = "olleh".

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    void reverseStringHelper(int l,int r,vector<char>& s){
        if(l>=r) return ;
        swap(s[l],s[r]);
        return reverseStringHelper(l+1,r-1,s);
    }
    public:
    vector<char> reverseString(vector<char>& s){
        int left=0;
        int right=s.size()-1;
        reverseStringHelper(left,right,s);
        return s;
    }
};


int main(){
    Solution sol;
    vector<char>s={'h', 'e', 'l', 'l', 'o'};
    vector<char>ans=sol.reverseString(s);
    for(char c: ans){
        cout<<c<<"";
    }
    return 0;
}