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
            boolean ans=sol.isPossible(s);
            if(ans==true){
                System.out.println("YES");
            }
            else System.out.println("NO");
            t--;
        }
	}
}


class Solution{
    public boolean isPossible(String s){
        int count=0;
        if(s.charAt(0)!='a') count++;
        if(s.charAt(1)!='b') count++;
        if(s.charAt(2)!='c') count++;
        return count<=2;
    }
}