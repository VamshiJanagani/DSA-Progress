//Input: n = 25
//Output: 1

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int countodd(int n){
        int count=0;
        int remainder;
        while(n>0){
            remainder= n%10;
            if(remainder%2!=0){
                count+=1;
            }
            n=n/10;
        }
        return count;
    }
};

int main(){
    int n=25;
    Solution sol;
    int ans=sol.countodd(n);
    cout<<"Count of odd digits is "<<ans;
}