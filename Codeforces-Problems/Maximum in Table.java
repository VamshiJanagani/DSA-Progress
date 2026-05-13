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
        int[][] arr = new int[n][n];
        Solution sol = new Solution();
        int ans = sol.getMaxValue(arr, n);
        System.out.println(ans);
        
	}
}

class Solution{
    public int getMaxValue(int[][] arr, int n){
        if(n==1) return 1;
        for(int i=0;i<n;i++){
            arr[i][0] = 1;
            arr[0][i] = 1;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                arr[i][j] = arr[i][j-1] + arr[i-1][j];
            }
        }
        return arr[n-1][n-1];
    }
}