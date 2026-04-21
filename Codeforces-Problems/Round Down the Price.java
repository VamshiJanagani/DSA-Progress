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
            int ans = sol.getTheDiff(n);
            
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getTheDiff(int n){
        int num = n;
        long p = 1;
        while(num > 0){
            p*=10;
            num/=10;
        }
        p/=10;
        int ans = n - (int)p;
        return ans;
    }
}
