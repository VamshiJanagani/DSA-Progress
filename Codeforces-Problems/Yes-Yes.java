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
        sc.nextLine();
        Solution sol = new Solution();
        while(t-->0){
            String s = sc.nextLine();
            boolean ans = sol.isYes(s);
            if(ans) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}

class Solution{
    public boolean isYes(String s){
        String str = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        int idx = str.indexOf(s);
        if(idx==-1) return false;
        return true;
    }
}