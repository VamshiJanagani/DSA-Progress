import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int  n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        Solution sol = new Solution();
        int ans = sol.getMinProblems(arr, n);
        System.out.println(ans);
	}
}

class Solution{
    public int getMinProblems(int[] arr, int n){
        Arrays.sort(arr);
        int sum = 0;
        for(int i=0;i<n;i+=2){
            sum+=(arr[i+1]-arr[i]);
        }
        return sum;
    }
}