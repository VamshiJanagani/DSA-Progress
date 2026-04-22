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
            int req = sc.nextInt();
            sc.nextLine();
            String[] arr = new String[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextLine();
            }
            int ans = sol.getMaxX(n, arr, req);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMaxX(int n, String[] arr, int req){
        int count = 0, sum = 0;
        for(String s:arr){
            int len = s.length();
            sum+=len;
            if(sum > req) return count;
            count++;
        }
        return count;
    }
}