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
            int m = sc.nextInt();
            sc.nextLine();
            String x = sc.nextLine();
            String s = sc.nextLine();
            int ans = sol.getMinOperations(x, n, s, m);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMinOperations(String x, int n, String s, int m){
        StringBuilder sb = new StringBuilder(x);
        
        int ops = 0;
        while(sb.indexOf(s)==-1){
            sb.append(sb);
            ops++;
            if(ops > 5) return -1;
        }
        return ops;
    }
}