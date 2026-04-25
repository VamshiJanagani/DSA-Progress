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
        Solution sol = new Solution();
        while(t-->0){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            boolean ans = sol.isPossible(arr, n);
            if(ans==true) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}

class Solution{
    public boolean isPossible(int[] arr, int n){
        int oddEven = 0, oddOdd = 0, evenOdd = 0, evenEven = 0;
        for(int i=0;i<n;i++){
            if(i%2!=0){
                if(arr[i]%2!=0) oddOdd++;
                else oddEven++;
            }
            else{
                if(arr[i]%2!=0) evenOdd++;
                else evenEven++;
            }
        }
        //we can increment all even indices and odd indices to be even
        //case -1 : all even indices are even and odd indices even 
        // evenOdd==0 && oddOdd==0 return true;
        //case -2: even indices have some even some odd -> false
        //(OR) odd indices have some odd and some even -> false
        //case -3 : all odd odd, all even odd -> true
        //all odd even and all even odd -> true
        // other way around like all odd odd and all even even -> true
        if(evenOdd>0 && evenEven>0 || oddOdd>0 && oddEven>0) return false;
        return true;
    }
}