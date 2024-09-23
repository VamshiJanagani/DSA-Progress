//Input : str = ["flowers" , "flow" , "fly", "flight" ]
//Output : "fl"
//Explanation : All strings given in array contains common prefix "fl".

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string LCP(vector<string> input){
        //First sort the list
        sort(input.begin(),input.end());
        string first=input[0];
        string last=input[input.size()-1];
        //Now lets compare both first and lasr strings and add the equal characters to another empty string
        string ans="";
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                break;
            }
            ans+=first[i];
        }
        return ans;
    }
};


int main(){
    Solution sol;
    vector<string> input = {"flower", "flow", "flight"};
    string ans=sol.LCP(input);
    cout<<"Longest Common Prefix is "<<ans;
    return 0;
}