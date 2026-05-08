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
            int k=sc.nextInt();
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            boolean ans=sol.isPossibleToSort(arr, n, k);
            if(ans==true) System.out.println("YES");
            else System.out.println("NO");
            t--;
        }
	}
}

class Solution{
    public boolean isPossibleToSort(int[] arr, int n, int k){
        boolean isSorted=true;
        for(int i=0;i<n-1;i++){
            if(arr[i] > arr[i+1]){
                isSorted=false;
                break;
            }
        }
        if(!isSorted && k==1) return false;
        return true;
    }
}
