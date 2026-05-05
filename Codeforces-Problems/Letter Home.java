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
            int st = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            int ans = sol.getMinDistance(n, st, arr);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMinDistance(int n, int start, int[] arr){
        if(n==1){
            return Math.abs(start-arr[0]);
        }
        int mini = Integer.MAX_VALUE, maxi = Integer.MIN_VALUE;
        for(int i:arr){
            mini = Math.min(mini, i);
            maxi = Math.max(maxi, i);
        }
        if(start<=mini || start>=maxi){
            return Math.max(maxi, start)-Math.min(mini, start);
        }
        int dist1 = (maxi - start)+(maxi - mini);
        int dist2 = (start - mini)+(maxi - mini);
        return Math.min(dist1, dist2);
    }
}