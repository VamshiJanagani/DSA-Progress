import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        Solution sol=new Solution();
        int t=sc.nextInt();
        sc.nextLine();
        while(t>0){
        String s=sc.nextLine();
        String ans=sol.guessString(s);
        System.out.println(ans);
        t--;
        }
	}
}

class Solution{
    public String guessString(String s){
        StringBuilder sb=new StringBuilder();
        sb.append(s.charAt(0));
        int n=s.length();
        for(int i=1;i<n;i+=2){
            sb.append(s.charAt(i));
        }
        return sb.toString();
    }
}