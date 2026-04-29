import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        Solution sol = new Solution();
        while(t-->0){
            int n = sc.nextInt();
            int ans = sol.getTheNumber(n);
            System.out.println(ans);
        }
	}
}
class Solution{
    public int getTheNumber(int num){
        if(num%7!=0){
            int original = num/10;
            int origlast = original%10;
            int dig = (num)%7;
            int newnum1 = (num-dig);
            int newnum2 = (num - dig + 7);
            int backupnewnum1 = newnum1, backupnewnum2 = newnum2;
            newnum1/=10;
            newnum2/=10;
            int last1 = newnum1%10, last2 = newnum2%10;
            if(last1==origlast) return backupnewnum1;
            else return backupnewnum2;
        }
        return num;
    }
}
