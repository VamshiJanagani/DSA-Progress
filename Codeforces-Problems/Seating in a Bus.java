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
            boolean ans = sol.areRulesFollowed(n, arr);
            if(ans) System.out.println("yes");
            else System.out.println("no");
        }
	}
}

class Solution{
    public boolean areRulesFollowed(int n, int[] arr){
        HashSet<Integer>hs = new HashSet<>();
        hs.add(arr[0]);
        for(int i=1;i<n;i++){
            if(!hs.contains(arr[i]-1) && !hs.contains(arr[i]+1)) return false;
            hs.add(arr[i]);
        }
        return true;
    }
}