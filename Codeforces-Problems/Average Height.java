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
                arr[i] = sc.nextInt();
            }
            ArrayList<Integer> ans = sol.getMaxAvgHeight(n, arr);
            for(int i:ans){
                System.out.print(i+" ");
            }
            System.out.println("");
        }
	}
}

class Solution{
    public ArrayList<Integer> getMaxAvgHeight(int n, int[] arr){
        ArrayList<Integer> odd = new ArrayList<>();
        ArrayList<Integer> even = new ArrayList<>();
        for(int i:arr){
            if(i%2!=0) odd.add(i);
            else even.add(i);
        }
        for(int i:even){
            odd.add(i);
        }
        return odd;
    }
}