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
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            long ans = sol.getCherry(arr, n);
            System.out.println(ans);
        }
	}
}

class Solution{
    public long getCherry(int[] arr, int n){
        long ans = 1L*arr[0]*arr[1];
        for(int i=1;i<n-1;i++){
            long left = 1L*arr[i]*arr[i-1];
            long right = 1L*arr[i]*arr[i+1];
            ans = Math.max(ans, Math.max(left, right));
        }
        return ans;
    }
}