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
            ArrayList<String> arr = new ArrayList<>();
            int len = n;
            while(n-->0){
                arr.add(sc.nextLine());
            }
            boolean ans = sol.getRequiredString(arr, len);
            if(ans) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}

class Solution{
    public boolean getRequiredString(ArrayList<String> arr, int n){
        int[] hashArray = new int[26];
        for(String s:arr){
            for(char c:s.toCharArray()){
                hashArray[c-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(hashArray[i]%n!=0) return false;
        }
        return true;
    }
}