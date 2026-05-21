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
            int n=sc.nextInt();
            sc.nextLine();
            String s=sc.nextLine();
            boolean ans=sol.isNotDistracted(s, n);
            if(ans==true){
                System.out.println("YES");
            }
            else System.out.println("NO");
            t--;
        }
	}
}


class Solution{
    public boolean isNotDistracted(String s, int n){
        HashSet<Character>hs=new HashSet<>();
        int i=0;
        while(i<n){
            char ch=s.charAt(i);
            if(hs.contains(ch)) return false;
            hs.add(ch);
            i++;
            while(i<n && s.charAt(i)==ch){
                i++;
            }
        }
        return true;
    }
}