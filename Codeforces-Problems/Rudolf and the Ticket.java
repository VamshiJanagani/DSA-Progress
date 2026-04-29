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
            int k = sc.nextInt();
            int[] left = new int[n];
            int[] right = new int[m];
            for(int i=0;i<n;i++){
                left[i] = sc.nextInt();
            }
            for(int i=0; i<m;i++){
                right[i] = sc.nextInt();
            }
            int ans = sol.getNumberOfWays(left, right, n, m, k);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getNumberOfWays(int[] left, int[] right, int n, int m, int k){
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(left[i]+right[j] <= k) count++;
            }
        }
        return count;
    }
}