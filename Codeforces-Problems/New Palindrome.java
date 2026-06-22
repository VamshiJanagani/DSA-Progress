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
            boolean ans = sol.isPalindrome(s);
            if(ans) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}

class Solution{
    public boolean isPalindrome(String s){
        int[] hashArray = new int[26];
        for(char c:s.toCharArray()){
            hashArray[c-'a']++;
        }
        int count = 0;
        for(int i=0;i<26;i++){
            if(hashArray[i] > 1) count++;
        }
        return count>1;
    }
}