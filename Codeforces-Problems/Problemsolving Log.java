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
            int ans = sol.getTheProblemSolved(s, n);
            System.out.println(ans);
        }
	}
}
class Solution{
    public int getTheProblemSolved(String s, int n){
        int[] hashArray = new int[26];
        for(char c:s.toCharArray()){
            hashArray[c-'A']++;
        }
        int count = 0;
        for(int i=0;i<26;i++){
            if(hashArray[i]>=i+1) count++;
        }
        return count;
    }
}
