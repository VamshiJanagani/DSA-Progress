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
        int t=sc.nextInt();
        while(t>0){
            int x=sc.nextInt();
            int ans=sol.getDigitsCount(x);
            System.out.println(ans);
            t--;
        }
	}
}

class Solution{
    public int getDigitsCount(int x){
        int num=0,count=0;
        while(x>0){
            count++;
            num=x;
            x/=10;
        }
        return ((num-1)*10)+(count*(count+1)/2);
    }
}
