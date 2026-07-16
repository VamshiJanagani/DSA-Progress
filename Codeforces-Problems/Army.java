import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n-1;i++){
            arr[i] = sc.nextInt();
        }
        int a = sc.nextInt();
        int b = sc.nextInt();
        Solution sol = new Solution();
        int ans = sol.getReqYears(arr, n, a, b);
        System.out.println(ans);
	}
}

class Solution{
    public int getReqYears(int[] arr, int n, int a, int b){
        int sum = 0;
        for(int i=0;i<n-1;i++){
            if(i>=a-1){
                sum+=arr[i];
            }
            if(i==b-2) break;
        }
        return sum;
    }
}