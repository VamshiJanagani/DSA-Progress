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
                arr[i]=sc.nextInt();
            }
            int ans = sol.getMinOperations(n, arr);
            System.out.println(ans);
        }
	}
}
class Solution{
    public int getMinOperations(int n, int[] arr){
        int ops=0, neg=0;
        for(int i:arr){
            if(i==0) ops++;
            else if(i==-1) neg++;
        }
        if(neg%2!=0) ops+=2;
        return ops++;
    }
}
