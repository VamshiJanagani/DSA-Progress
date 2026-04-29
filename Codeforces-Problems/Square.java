import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int[] arr = new int[8];
            for(int i=0;i<8;i++){
                arr[i] =  sc.nextInt();
            }
            //index 0, 2, 4, 6 are x axis
            //index 1, 3, 5, 7 are y axis
            int side = Math.abs(arr[2]-arr[0])==0?Math.abs(arr[2]-arr[4]):Math.abs(arr[2]-arr[0]);
            System.out.println(side*side);
        }
	}
}
