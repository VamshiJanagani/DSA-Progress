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
            int n =sc.nextInt();
            int k = sc.nextInt();
            int p = sc.nextInt();
            int ans = sol.getMinOps(n, k, p);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMinOps(int n, int k, int p){
        int ans = (Math.abs(k)+p-1)/p;
        if(ans > n) return -1;
        return ans;
    }
}
