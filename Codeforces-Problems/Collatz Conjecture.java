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
            int k = sc.nextInt();
            int x = sc.nextInt();
            int ans = sol.getInitialValue(k, x);
            System.out.println(ans);
        }
	}
}
class Solution{
    public int getInitialValue(int k, int x){
        int ans = x;
        while(k-->0){
            ans*=2;
        }
        return ans;
    }
}
