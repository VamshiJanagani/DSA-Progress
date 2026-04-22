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
        int m = sc.nextInt();
        int count = 0;
        for(int a=0;a*a<=n;a++){
            for(int b=0;b*b<=m;b++){
                if((a*a + b)==n && (b*b+a)==m) count++;
            }
        }
        System.out.println(count);
	}
}
