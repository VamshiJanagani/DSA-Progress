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
		Solution sol=new Solution();
		while(t>0){
            int x=sc.nextInt();
            int y=sc.nextInt();
            int[] arr=sol.getMinAndMax(x, y);
		    System.out.println(arr[0]+" "+ arr[1]);
		    t--;
		}

	}
}

class Solution{
    public int[] getMinAndMax(int x, int y){
        if(x<=y) return new int[]{x, y};
        return new int[]{y, x};
    }
}
