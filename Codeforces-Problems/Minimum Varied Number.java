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
            int sum = sc.nextInt();
            int ans = sol.getMinimumNumber(sum);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMinimumNumber(int sum){
        int[] arr = new int[10];
        int initial = 9;
        while(sum > 0){
            if(arr[initial]==1) initial--;
            int dig = ((sum/initial)>=1)?initial:(sum%initial);
            arr[dig]++;
            sum-=initial;
        }
        int number = 0;
        for(int i=1;i<10;i++){
            if(arr[i]==1) number = (number*10)+i;
        }
        return number;
    }
}