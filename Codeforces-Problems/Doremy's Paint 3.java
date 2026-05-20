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
            boolean ans = sol.isArrayGood(arr, n);
            if(ans) System.out.println("Yes");
            else System.out.println("No");
        }
	}
}

class Solution{
    public boolean isArrayGood(int[] arr, int n){
        HashMap<Integer, Integer>mp = new HashMap<>();
        for(int i:arr){
            mp.put(i, mp.getOrDefault(i, 0)+1);
        }
        if(mp.size() > 2) return false;
        if(mp.size()==1) return true;
        int[] ans = new int[2];
        int i=0;
        for(Map.Entry<Integer, Integer> e:mp.entrySet()){
            int key = e.getKey(), freq = e.getValue();
            ans[i]= freq;
            i++;
        }
        //if n is odd -> say 5 freq 3 , and freq 2
        //if n is even -> say 4, freq 2 and freq 2
        if(n%2==0){
            return (ans[0]==ans[1]);
        }
        int first = n/2;
        int sec = n-first;
        return (Math.min(ans[0], ans[1])==first && Math.max(ans[0], ans[1])==sec);
    }
}