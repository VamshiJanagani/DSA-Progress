//Input: n = 123
//Output: 321

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
int reverse(int n){
int revnumber=0;
int lastdigit;
while(n>0){
    lastdigit=n%10;
    revnumber=revnumber*10+lastdigit;
    n=n/10;
}
return revnumber;
}
};



int main(){
    int n=123;
    Solution sol;
    int ans=sol.reverse(n);
    cout<<"reverse of "<<n<<" is "<<ans;
}