//Input : s = "abcde" , goal = "cdeab"
//Output : true
//Explanation : After performing 2 shifts we can achieve the goal string from string s.
//After first shift the string s is => bcdea
//After second shift the string s is => cdeab.

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    bool isRotate(string &s, string &goal){
        string another=s+s;
        return another.find(goal)!=string::npos;
    }
};


int main(){
    Solution sol;
    string s="abcde";
    string goal="adeac";
    bool ans=sol.isRotate(s,goal);
    if(ans){
        cout<<"Yes, We can achieve the goal string after shifts";
    }
    else{
        cout<<"No, we can't achieve the goal string";
    }
    return 0;
}