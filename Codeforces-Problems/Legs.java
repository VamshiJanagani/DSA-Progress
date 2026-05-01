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
        while(t>0){
            int n=sc.nextInt();
            int animals=n/4;
            n=n-4*animals;
            animals+=(n/2);
            System.out.println(animals);
            t--;
        }
	}
}
