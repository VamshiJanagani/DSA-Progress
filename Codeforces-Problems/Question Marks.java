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
            sc.nextLine();
            String s = sc.nextLine();
            int ans = sol.getMaxCorrect(s, n);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMaxCorrect(String s, int n){
        int[] hashArray = new int[4];
        for(char c:s.toCharArray()){
            if(c=='?') continue;
            hashArray[c-'A']++;
        }
        int count = Math.min(n, hashArray[0]) + Math.min(hashArray[1], n) + Math.min(n, hashArray[2]) + Math.min(n, hashArray[3]);
        return count;
    }
}