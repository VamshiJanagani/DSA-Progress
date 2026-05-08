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
            int[] arr1=new int[n];
            int[] arr2=new int[n];
            for(int i=0;i<n;i++){
                arr1[i]=sc.nextInt();
            }
            for(int i=0;i<n;i++){
                arr2[i]=sc.nextInt();
            }
            int ans=sol.getMaxSum(arr1, arr2, n, k);
            System.out.println(ans);
            t--;
        }
	}
}

class Solution{
    public int getMaxSum(int[] arr1, int[] arr2, int n, int k){
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        int i=0,j=n-1, sum=0;
        while(i<j){
            int temp=arr2[i];
            arr2[i]=arr2[j];
            arr2[j]=temp;
            i++;
            j--;
        }
        for(int l=0;l<n;l++){
            if(k>0){
                sum+=Math.max(arr1[l], arr2[l]);
                k--;
            }
            else sum+=arr1[l];
        }
        return sum;
    }
}
