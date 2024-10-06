//Input : num = 529
//Output : 7
//Explanation : In first iteration the digits sum will be = 5 + 2 + 9 => 16
//In second iteration the digits sum will be 1 + 6 => 7.
//Now single digit is remaining , so we return it.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int addDigits(int num){
        if(num<10){
            return num;
        }
        int sum=0;
        while(num>0){
            sum=sum+num%10; //adding sum and remainder
            num=num/10;
        }
        return addDigits(sum); 
    }
};

int main(){
    Solution sol;
    int n=529;
    int ans=sol.addDigits(n);
    cout<<"Sum of digits in number "<<n<<" is "<<ans;
    return 0;
}
