import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        Solution sol = new Solution();
        while(t-->0){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            int ans = sol.getBit(n, arr);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getBit(int n, int[] arr){
        int ans = 0;
        for(int i=0;i<n;i++){
            ans^=arr[i];
        }
        int result = 0;
        for(int i:arr){
            result ^=(i^ans);
        }
        if(result!=0) return -1;
        return ans;
    }
}
