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
            boolean ans = sol.isMelodyPerfect(arr, n);
            if(ans) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}

class Solution{
    public boolean isMelodyPerfect(int[] arr, int n){
        for(int i=0;i<n-1;i++){
            int diff = Math.abs(arr[i]-arr[i+1]);
            if(diff!=7 && diff!=5) return false;
        }
        return true;
    }
}
