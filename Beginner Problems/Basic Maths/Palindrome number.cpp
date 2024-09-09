//Input: n = 121

//Output: true

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool ispalindromenumber(int n){
        int copyofn=n;
        int revnumber=0;
        int lastdigit;
        while(n>0){
            lastdigit=n%10;
            revnumber=revnumber*10+lastdigit;
            n=n/10;
        }
        return (copyofn==revnumber);
    }
};


int main(){
    int n=121;
    Solution sol;
    bool ans=sol.ispalindromenumber(n);
    if(ans) cout<<"Given number "<<n<<" is a palindrome number";
    else cout<<n<<" is not a palindrome";
    return 0;
}