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
        while(t-->0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            
            int aNeed = Math.max(0, x-a);
            int bNeed = Math.max(0, y-b);
            if(c>=(aNeed+bNeed)) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}
