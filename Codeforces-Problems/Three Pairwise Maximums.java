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
            int[] arr = new int[3];
            for(int i=0;i<3;i++){
                arr[i] = sc.nextInt();
            }
            ArrayList<Integer> ans = sol.getABC(arr);
            if(ans.size()>1){
                System.out.println("YES");
                for(int i:ans){
                    System.out.print(i+" ");
                }
            }
            else System.out.print("NO");
            System.out.println();
        }
	}
}

class Solution{
    public ArrayList<Integer> getABC(int[] arr){
        ArrayList<Integer> ans = new ArrayList<>();
        boolean flag = true;
        Arrays.sort(arr);
        if(arr[1]!=arr[2]) flag = false;
        if(flag){
            ans.add(arr[0]);
            ans.add(arr[0]);
            ans.add(arr[2]);
        }
        else ans.add(-1);
        return ans;
    }
}