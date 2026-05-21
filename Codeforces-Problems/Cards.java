import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String s = sc.nextLine();
        int[] hashArray = new int[26];
        for(char c:s.toCharArray()){
            hashArray[c-'a']++;
        }
        int ncount = hashArray[13];
        int rcount = hashArray[17];
        StringBuilder sb = new StringBuilder();
        while(ncount>0){
            sb.append("1");
            sb.append(" ");
            ncount--;
        }
        while(rcount>0){
            sb.append("0");
            sb.append(" ");
            rcount--;
        }
        System.out.println(sb);
        
	}
}
