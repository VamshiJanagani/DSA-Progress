//Input : s = ["h", "e" ,"l" ,"l" ,"o"]
//Output : ["o", "l", "l", "e", "h"]
//Explanation : The given string is s = "hello" and after reversing it becomes s = "olleh".
//hello
//olleh

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<char> reverseString(vector<char>& s){
        // stack<char>st;
        // //Traversing through string and pushing into stack
        // for(int i=0;i<s.size();i++){
        //     st.push(s[i]);
        // }
        // //Now to get a reverse , we will replace the original string with stack's top elements and remove them after every iteration.

        // for(int i=0;i<s.size();i++){
        //     s[i]=st.top();
        //     st.pop();
        // }
        //Two-pointer approach
        int left=0;
        int right=s.size()-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};


int main(){
    vector<char> s= {'h', 'e', 'l', 'l', 'o'}; 
    Solution sol;
    vector<char> ans=sol.reverseString(s);
    for (char c : ans) {
        cout << c; // Print each character of the reversed string
    }
    return 0;
}