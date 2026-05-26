import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        Solution sol=new Solution();
        while(t>0){
            String s=sc.nextLine();
            int ans=sol.getSumOfExpression(s);
            System.out.println(ans);
            t--;
        }
	}
}

class Solution{
    public int getSumOfExpression(String s){
        return s.charAt(0)-'0'+s.charAt(2)-'0';
    }
}
