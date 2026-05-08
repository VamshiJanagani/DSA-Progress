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
        sc.nextLine();
        while(t-->0){
            String[] arr = sc.nextLine().split(" ");
            String ans = sol.getConditionality(arr[0], arr[1]);
            System.out.println(ans);
        }
	}
}

class Solution{
    public String getConditionality(String a, String b){
        HashMap<Character, Integer>mp = new HashMap<>();
        mp.put('L', 2);
        mp.put('S', 0);
        mp.put('M', 1);
        int n = a.length(), m = b.length();
        if(a.charAt(n-1)==b.charAt(m-1)){
            if(a.charAt(n-1)=='S' && b.charAt(m-1)=='S'){
                if(n > m) return "<";
                else if(n < m) return ">";
                else return "=";
            }
            else{
                if(n > m) return ">";
                else if(n < m) return "<";
                else return "=";
            }
        }
        else if(mp.get(a.charAt(n-1)) > mp.get(b.charAt(m-1))){
            return ">";
        }
        else if(mp.get(a.charAt(n-1)) < mp.get(b.charAt(m-1))){
            return "<";
        }
        return "=";
    }
}