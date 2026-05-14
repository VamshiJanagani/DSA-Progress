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
            sc.nextLine();
            String s = sc.nextLine();
            boolean ans = sol.isPasswordStrong(s, n);
            if(ans) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}

class Solution{
    public boolean isPasswordStrong(String s, int n){
        char prevchar = '-';
        int prevdig = -1;
        for(int i=0;i<n;i++){
            if(Character.isDigit(s.charAt(i))){
                int curdig = s.charAt(i)-'0';
                if(prevdig==-1){
                    if(i>0) return false;
                    prevdig = curdig;
                }
                else if(curdig < prevdig) return false;
                prevdig = curdig;
            }
            else{
                char currchar = s.charAt(i);
                if(prevchar!='-' && currchar < prevchar) return false;
                prevchar = currchar;
            }
        }
        return true;
    }
}