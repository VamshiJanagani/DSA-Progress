import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        Solution sol=new Solution();
        int t=sc.nextInt();
        while(t>0){
            int n=sc.nextInt();
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            int ans=sol.getMinCandies(arr, n);
            System.out.println(ans);
            t--;
        }
	}
}

class Solution{
    public int getMinCandies(int[] arr, int n){
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            mini=Math.min(arr[i], mini);
        }
        int count=0;
        for(int i=0;i<n;i++){
            count+=Math.abs(arr[i]-mini);
        }
        return count;
    }
}
