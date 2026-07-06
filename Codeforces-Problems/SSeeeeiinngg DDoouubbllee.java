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
            String ans = sol.getRearrangedString(s);
            System.out.println(ans);
        }
	}
}

class Solution{
    public String getRearrangedString(String s){
        int[] hashArray = new int[26];
        for(char c:s.toCharArray()){
            hashArray[c-'a']++;
        }
        int n = s.length();
        char[] arr = new char[2*n];
        int startidx = 0, endidx = 2*n-1;
        for(int i=0;i<26;i++){
            int count =  hashArray[i];
            if(count==0) continue;
            int startc = count;
            while(startc-->0){
                arr[startidx]=(char)(i+'a');
                startidx++;
            }
            startc = count;
            while(startc-->0){
                arr[endidx]=(char)(i+'a');
                endidx--;
            }
        }
        String ans = new String(arr);
        return ans;
    }
}