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
            int x = sc.nextInt();
            int[] arr = new int[3];
            for(int i=0;i<3;i++){
                arr[i] = sc.nextInt();
            }
            boolean ans = sol.canWeOpen(arr, x);
            if(ans) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}
class Solution{
    public boolean canWeOpen(int[] arr, int x){
        HashSet<Integer> s = new HashSet<>();
        int i=0, open = x;
        while(i<3){
            s.add(open);
            open = arr[open-1];
            i++;
            if(open == 0) break;
        }
        return s.size()==3;
    }
}
