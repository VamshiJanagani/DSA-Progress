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
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            int ans = sol.getMaxScore(n, arr);
            System.out.println(ans);
        }
	}
}

class Solution{
    public int getMaxScore(int n, int[] arr){
        HashMap<Integer, ArrayList<Integer>>mp = new HashMap<>();
        for(int i=0; i<n;i++){
            mp.putIfAbsent(arr[i], new ArrayList<>());
            mp.get(arr[i]).add(i);
        }
        int count = 0;
        for(Map.Entry<Integer, ArrayList<Integer>> e:mp.entrySet()){
            int key = e.getKey();
            ArrayList<Integer> al = e.getValue();
            count+=(al.size()/2);
        }
        return count;
    }
}
