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
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        int mini = Integer.MAX_VALUE, first = -1, second = -1;
        for(int i=0;i<n-1;i++){
            int diff = Math.abs(arr[i]-arr[i+1]);
            if(diff < mini){
                first = i;
                second = i+1;
                mini = diff;
            }
        }
        int diff = Math.abs(arr[n-1]-arr[0]);
        if(diff < mini){
            first = n-1;
            second = 0;
        }
        System.out.println((first+1) + " "+(second+1));
	}
}
