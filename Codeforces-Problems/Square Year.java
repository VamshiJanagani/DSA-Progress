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
            ArrayList<Integer> ans = sol.getTheSquareYear(s);
            for(int i:ans){
                System.out.print(i+" ");
            }
            System.out.println();
        }
	}
}

class Solution{
    public ArrayList<Integer> getTheSquareYear(String s){
        int number = Integer.parseInt(s);
        int root = (int)Math.sqrt(number);
        ArrayList<Integer>ans = new ArrayList<>();
        if(root*root == number){
            int half = root/2;
            int sechalf = root-half;
            ans.add(half);
            ans.add(sechalf);
            return ans;
        }
        ans.add(-1);
        return ans;
    }
}