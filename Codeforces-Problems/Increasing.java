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
        Solution sol=new Solution();
        while(t>0){
            int n=sc.nextInt();
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            int ans=sol.canBeSorted(arr, n);
            if(ans==1){
                System.out.println("YES");
            }
            else System.out.println("NO");
            t--;
        }
	}
}

class Solution{
    public int canBeSorted(int[] arr, int n){
        Arrays.sort(arr);
        for(int i=0;i<n-1;i++){
            if(arr[i+1] <= arr[i]) return 0;
        }
        return 1;
    }
}