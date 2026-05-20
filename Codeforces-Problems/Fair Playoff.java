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
            int[] arr=new int[4];
            for(int i=0;i<4;i++){
                arr[i]=sc.nextInt();
            }
            boolean ans=sol.isItFair(arr);
		    if(ans==true) System.out.println("YES");
		    else System.out.println("NO");
		    t--;
		}

	}
}

class Solution{
    public boolean isItFair(int[] arr){
        int m1winner=Math.max(arr[0], arr[1]);
        int m2winner=Math.max(arr[2], arr[3]);
        int maxi=m1winner, secmaxi=m2winner;
        if(m2winner>maxi){
            maxi=m2winner;
            secmaxi=m1winner;
        }
        Arrays.sort(arr);
        if(arr[3]==maxi && arr[2]==secmaxi) return true;
        return false;
    }
}
