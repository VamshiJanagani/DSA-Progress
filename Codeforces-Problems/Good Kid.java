import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        Solution sol = new Solution();
        while(t>0){
            int n = sc.nextInt();
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            int ans = sol.getMaxProduct(arr, n);
            System.out.println(ans);
            t--;
        }
	}
}

class Solution{
    public int getMaxProduct(int[] arr, int n){
        Arrays.sort(arr);
        int prod=arr[0]+1;
        for(int i=1;i<n;i++){
            prod*=arr[i];
        }
        return prod;
    }
}