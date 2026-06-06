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
        Solution sol = new Solution();
        while(t-->0){
            String s = sc.nextLine();
            int ans = sol.getMinority(s);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMinority(String s){
        int oc=0, zc=0;
        for(char c:s.toCharArray()){
            if(c=='1') oc++;
            else zc++;
        }
        int n = s.length();
        if(zc==oc){
            if(s.charAt(n-1)=='1') oc--;
            else zc--;
        }
        return Math.min(zc, oc);
    }
}