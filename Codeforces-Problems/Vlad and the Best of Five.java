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
            char ch=sol.getWinner(s);
            System.out.println(ch);
            t--;
        }
	}
}

class Solution{
    public char getWinner(String s){
        int ac=0,bc=0;
        for(char c: s.toCharArray()){
            if(c=='A') ac++;
            else bc++;
        }
        return ac>bc?'A':'B';
    }
}