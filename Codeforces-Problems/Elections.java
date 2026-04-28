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
            int ansA = (Math.max(b, c)+1-a)<0?0:(Math.max(b, c)+1-a);
            int ansB = (Math.max(a, c)+1-b)<0?0:(Math.max(a, c)+1-b);
            int ansC = (Math.max(a, b)+1-c)<0?0:(Math.max(a, b)+1-c);
            System.out.println(ansA + " "+ ansB +" "+ansC);
        }
	}
}
