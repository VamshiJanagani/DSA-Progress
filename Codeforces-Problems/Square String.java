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
        sc.nextLine();
        while(t>0){
            String s=sc.nextLine();
            boolean ans=sol.isSquare(s);
            if(ans==true){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
            t--;
        }
	}
}


class Solution{
    public boolean isSquare(String s){
        int n=s.length();
        if(n%2==1) return false;
        int i=0,j=n/2;
        while(j<n){
            if(s.charAt(i)!=s.charAt(j)) return false;
            i++;
            j++;
        }
        return true;
    }
}