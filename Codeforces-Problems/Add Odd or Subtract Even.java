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
        Solution sol = new Solution();
        while(t-->0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int ans = sol.getMinOperations(a, b);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMinOperations(int a, int b){
        if(a > b){
            int diff = a-b;
            if(diff%2==0) return 1;
            return 2;
        }
        else if(a < b){
            int diff = b-a;
            if(diff%2==0) return 2;
            return 1;
        }
        return 0;
    }
}
