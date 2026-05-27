import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        Solution sol = new Solution();
        ArrayList<Integer> ans = sol.getFinalArray(arr, n);
        System.out.println(ans.size());
        for(int i:ans){
            System.out.print(i+" ");
        }
	}
}

class Solution{
    public ArrayList getFinalArray(int[] arr, int n){
        HashMap<Integer, Integer> mp = new HashMap<>();
        for(int i:arr){
            mp.put(i, mp.getOrDefault(i, 0)+1);
        }
        ArrayList<Integer>ans = new ArrayList<>();
        for(int element : arr){
            int freq = mp.get(element);
            if(freq==1){
                ans.add(element);
            }
            mp.put(element, mp.getOrDefault(element, 0)-1);
        }
        return ans;
    }
}