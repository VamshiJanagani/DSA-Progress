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
            int[] ans = sol.getTheIncArray(n);
            for(int i:ans){
                System.out.print(i+" ");
            }
            System.out.println();
        }
	}
}

class Solution{
    public int[] getTheIncArray(int n){
        int[] arr = new int[n];
        arr[0] = 2;
        arr[1] = 3;
        arr[2] = 6;
        for(int i=3;i<n;i++){
            arr[i] = arr[i-1] + 1;
        }
        return arr;
    }
}