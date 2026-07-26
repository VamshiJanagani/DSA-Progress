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
            int ans = sol.getSum(arr, n);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getSum(int[] arr, int n){
        int sum = 0;
        for(int i:arr){
            sum+=Math.abs(i);
        }
        return sum;
    }
}