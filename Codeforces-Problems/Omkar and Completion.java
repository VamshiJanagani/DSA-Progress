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
            int[] ans = sol.getArray(n);
            for(int i:ans){
                System.out.print(i+" ");
            }
            System.out.println();
        }
	}
}
class Solution{
    public int[] getArray(int n){
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = 1;
        }
        return arr;
    }
}
