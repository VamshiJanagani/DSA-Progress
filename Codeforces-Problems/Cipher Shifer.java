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
            String ans = sol.getDecryptedString(n, s);
            System.out.println(ans);
        }
	}
}

class Solution{
    public String getDecryptedString(int n, String s){

        int i=0;
        StringBuilder sb = new StringBuilder();
        while(i<n){
            char curr = s.charAt(i);
            sb.append(curr);
            i++;
            while(i<n && s.charAt(i)!=curr){
                i++;
            }
            i++;
        }
        return sb.toString();
    }
}