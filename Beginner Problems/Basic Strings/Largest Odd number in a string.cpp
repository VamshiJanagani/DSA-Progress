//Input : s = "0214638"
//Output : "21463"
//Explanation : The different odd numbers that can be formed by the given string are --> 1, 3, 21, 63, 463, 1463, 21463.
//We cannot include 021463 as the number contains leading zero.
//So largest odd number in given string is 21463.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string largestOdd(string &s){
        //we will be using substr(i,j-i+1)
        //i being start, j being last and j-i+1 being length
        //Lets find j
        int j=-1, n=s.size();
        for(int i=n-1;i>=0;i--){
            //converting string to int by writing s[i]-'0'
            //converts '8'-'0'=8
            if((s[i]-'0')%2!=0){
                j=i;
                break;
            }
        }
        //lets find i with no zeros at the front
        int i=0;
        while(i<n){
            if(s[i]!='0'){
                break;
            }
            i++;
        }
        return s.substr(i,j-i+1);
    }
};


int main(){
    Solution sol;
    string s="0214638";
    string ans=sol.largestOdd(s);
    cout<<"The largest odd number in "<<s<<" is "<<ans;
    return 0;
}