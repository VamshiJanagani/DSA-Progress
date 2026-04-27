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
            String ch = sc.nextLine();
            boolean ans = sol.isEqualToCharacter(s, ch);
            if(ans) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}
class Solution{
    public boolean isEqualToCharacter(String s, String ch){
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s.charAt(i)==ch.charAt(0)){
                int left = i, right = n-i-1;
                if(left%2==0 && right%2==0) return true;
            }
        }
        return false;
    }
}
