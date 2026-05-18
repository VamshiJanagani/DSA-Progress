import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int cubes = sc.nextInt();
        Solution sol = new Solution();
        int ans = sol.getLevel(cubes);
        System.out.println(ans);
	}
}

class Solution{
    public int getLevel(int cubes){
        int sum = 0, prev = 0, ans =0;
        for(int i=1;i<=cubes;i++){
            int cur = prev + i;
            sum+=cur;
            if(sum<=cubes){
                prev = cur;
                ans=i;
            }
            else break;
        }
        return ans;
    }
}