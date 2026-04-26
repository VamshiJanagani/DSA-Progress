import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String t = sc.nextLine();
        int i=0;
        for(char c:t.toCharArray()){
            if(c==s.charAt(i)){
                i++;
            }
        }
        System.out.println(i+1);
	}
}
