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
            int x = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            boolean ans = sol.isAlarmEnough(n, arr, x);
            if(ans) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}

class Solution{
    public boolean isAlarmEnough(int n, int[] arr, int x){
        boolean flag = false, usedOnce = false;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                if(usedOnce) return false;
                flag = true;
            }
            if(flag){
                x--;
                if(x==0) usedOnce = true;
            }
        }
        return true;
    }
}