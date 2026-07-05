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
            int a = sc.nextInt();
            int b = sc.nextInt();
            boolean ans = sol.canYousefReachTheDest(a, b);
            if(ans) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}

class Solution{
    public boolean canYousefReachTheDest(int a, int b){
        if((a%2==1) && (b%2==1)) return false;
        return true;
    }
}