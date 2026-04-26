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
        while(t-->0){
            String s = sc.nextLine();
            int[] arr = new int[26];
            for(char c:s.toCharArray()){
                arr[c-'A']++;
            }
            int ACcount = arr[0]+arr[2];
            int Bcount = arr[1];
            if(ACcount==Bcount) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}
