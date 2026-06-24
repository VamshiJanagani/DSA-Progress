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
            int ans = sol.getMaxOps(arr, n);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMaxOps(int[] arr, int n){
        int maxi = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i] > arr[i+1]) maxi = Math.max(arr[i], maxi);
        }
        return maxi;
    }
}