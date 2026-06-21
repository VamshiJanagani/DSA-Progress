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
            int ans = sol.getTheIndex(s);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getTheIndex(String s){
        HashMap<String, Integer> mp = new HashMap<>();
        
        int index = 1;
        for(char ch1 = 'a'; ch1<='z'; ch1++){
            for(char ch2 = 'a'; ch2<='z'; ch2++){
                if(ch1==ch2) continue;
                char[] arr = {ch1, ch2};
                String temp = new String(arr);
                mp.put(temp, index++);
            }
        }
        int ans = mp.get(s);
        return ans;
    }
}