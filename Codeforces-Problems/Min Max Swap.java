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
            int[] brr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            for(int i=0;i<n;i++){
                brr[i] = sc.nextInt();
            }
            int ans = sol.getMinMax(arr, brr, n);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMinMax(int[] arr, int[] brr, int n){
        int maxi1 = -1, maxi2 = -1;
        for(int i=0;i<n;i++){
            if(arr[i] < brr[i]){
                int temp = arr[i];
                arr[i] = brr[i];
                brr[i] = temp;
            }
            maxi1 = Math.max(maxi1, arr[i]);
            maxi2 = Math.max(maxi2, brr[i]);
        }
        int ans = maxi1 * maxi2;
        return ans;
    }
}