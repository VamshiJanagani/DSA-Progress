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
            int ans = sol.getCountOfOnes(n, s);
            System.out.println(ans);
        }
	}
}


class Solution{
    public int getCountOfOnes(int n, String s){
        int ones = 0;
        for(char c:s.toCharArray()){
            if(c=='1') ones++;
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(s.charAt(i)=='0') count+=(ones+1);
            else count+=(ones-1);
        }
        return count;
    }
}