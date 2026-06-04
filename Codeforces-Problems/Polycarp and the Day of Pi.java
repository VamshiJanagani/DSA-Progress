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
        sc.nextLine();
        String pi = "314159265358979323846264338327";
        Solution sol = new Solution();
        while(t-->0){
            String s = sc.nextLine();
            int ans = sol.howManyRemember(s, pi);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int howManyRemember(String s, String pi){
        int count = 0, i=0, n = Math.min(30,s.length());
        while(i<n){
            if(s.charAt(i)!=pi.charAt(i)) break;
            count++;
            i++;
        }
        return count;
    }
}