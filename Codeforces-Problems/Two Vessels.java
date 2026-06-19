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
            int c = sc.nextInt();
            int ans = sol.getMinMoves(a, b, c);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMinMoves(int a, int b, int c){
        double equal = (double)(a*1.0+b*1.0)/2;
        double minus = Math.abs(a*1.0-equal);
        
        int another = (int)Math.ceil(minus);
        int ans = (another + c - 1)/c;
        return ans;
    }
}