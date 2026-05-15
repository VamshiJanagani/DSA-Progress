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
            int ans = sol.getMinNumberOfMoves(n);
            System.out.println(ans);
        }
	}
}
class Solution{
    public int getMinNumberOfMoves(int n){
        if(n==1) return 2;
        
        int rem = n%3;
        if(rem==0) return n/3;
        return n/3 + 1;
    }
}
