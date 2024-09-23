//Input : s = "egg" , t = "add"
//Output : true
//Explanation : The 'e' in string s can be replaced with 'a' of string t.
//The 'g' in string s can be replaced with 'd' of t.
//Hence all characters in s can be replaced to get t.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isomorphic(string &s, string &t){
        //Declaring hash values
        int smap[256]={0};
        int tmap[256]={0};
        //Now going through size of one string since its given that both strings are of equal size
        for(int i=0;i<s.size();i++){
            //if the previous indices of both are not equal, then its not isomorphic
            //example-> e=0, a=0 , equal -> then map e with 1 and a with 1 
            // then g=0,d=0, equal -> then map g with 2 and d with 2
            // then g=2, d=2, equal -> then map g with 3 and d with 3
            if(smap[s[i]]!=tmap[t[i]]){
                return false;
            }
            smap[s[i]]=i+1;
            tmap[t[i]]=i+1;
        }
        return true;
    }
};


int main(){
    Solution sol;
    string s="apple";
    string t="bbnbm";
    bool ans=sol.isomorphic(s,t);
    if(ans){
        cout<<"They both are isomorphic";
    }
    else{
        cout<<"Not isomorphic";
    }
    return 0;
}