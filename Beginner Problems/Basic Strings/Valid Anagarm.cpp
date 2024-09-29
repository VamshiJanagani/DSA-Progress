//Input : s = "anagram" , t = "nagaram"
//Output : true
//Explanation : We can rearrange the characters of string s to get string t as frequency of all characters from both strings is same.

//s="eat", t="tea"
//true

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool validAnagram(string &s, string &t){
        //Optimal approach using hashing
        int freqs[26]={0};
        int freqt[26]={0};
        int n=s.size();
        //If both are not equal sizes, they are not valid
        if(n!=t.size()){
            return false;
        }
        //Now storing counts of each character
        for(int i=0;i<n;i++){
            freqs[s[i]-'a']++;
            freqt[t[i]-'a']++;
        }
        //Now comparing both hash arrays
        for(int i=0;i<26;i++){
            if(freqs[i]!=freqt[i]){
                return false;
            }
        }
        return true;
    }
};


int main(){
    string s="dog";
    string t="cat";
    Solution sol;
    bool ans=sol.validAnagram(s, t);
    if(ans){
        cout<<t<<" is a valid anagram of "<<s;
    }
    else{
        cout<<t<<" is not a valid anagram of "<<s;
    }
    return 0;
}