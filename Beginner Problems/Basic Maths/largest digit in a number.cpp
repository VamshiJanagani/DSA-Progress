//Input: n = 25, Output: 5
//input n=99, output=9
//input n=1 , output=1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int largestdigit(int n){
        int lastdigit;
        int largest=0;
        while(n>0){
            lastdigit=n%10;
            if(lastdigit>largest){
                largest=lastdigit;
            }
            n=n/10;
        }
        return largest;
    }
};


int main(){
    int n=1;
    Solution sol;
    int ans=sol.largestdigit(n);
    cout<<"largest digit in "<<n<<" is "<<ans;
    return 0;
}