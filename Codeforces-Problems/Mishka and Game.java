import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        Solution sol=new Solution();
        int n=sc.nextInt();
        int[][] arr=new int[n][2];
        for(int i=0;i<n;i++){
            arr[i][0]=sc.nextInt();
            arr[i][1]=sc.nextInt();
        }
        int ans=sol.WhoIsTheWinner(n,arr);
        if(ans==1){
            System.out.println("Mishka");
        }
        else if(ans==2){
            System.out.println("Chris");
        }
        else{
            System.out.println("Friendship is magic!^^");
        }
	}
}

class Solution{
    public int WhoIsTheWinner(int n, int[][] arr){
        int mish=0,chr=0;
        for(int i=0;i<n;i++){
            if(arr[i][0] > arr[i][1]) mish++;
            else if(arr[i][0] < arr[i][1]) chr++;
        }
        if(mish>chr) return 1;
        else if(mish<chr) return 2;
        return 0;
    }
}