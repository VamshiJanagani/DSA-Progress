#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isArmstrong(int n){
        int count=0;
        int dup=n;
        int trip=n;
        while(dup>0){
            count+=1;
            dup=dup/10;
        }
        int armnumber=0;
        while(trip>0){
            int lastdigit=trip%10;
            armnumber=armnumber+pow(lastdigit,count);
            trip=trip/10;
        }
        return (armnumber==n);
    }
};



int main(){
    int n=153;
    Solution sol;
    bool ans=sol.isArmstrong(n);
    if(ans) {cout<<n<<" is armstrong";
    }
    else{
    cout<<n<<" is not an armstrong";
    }
    return 0;
}