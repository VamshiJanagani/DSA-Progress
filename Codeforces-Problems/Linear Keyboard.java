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
            String alphabets = sc.nextLine();
            String word = sc.nextLine();
            int ans = sol.getHowMuchTime(alphabets, word);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getHowMuchTime(String alphabets, String word){
        HashMap<Character, Integer>mp = new HashMap<>();
        int i=1;
        for(char c:alphabets.toCharArray()){
            mp.put(c, i++);
        }
        int n = word.length(), time=0;
        for(int j=1;j<n;j++){
            time+=Math.abs(mp.get(word.charAt(j))-mp.get(word.charAt(j-1)));
        }
        return time;
    }
}
