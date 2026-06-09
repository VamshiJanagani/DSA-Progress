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
                arr[i] = sc.nextInt();
            }
            boolean ans = sol.isNonDecreasingOrWhat(arr, n);
            if(ans) System.out.println("YES");
            else System.out.println("NO");
        }
	}
}

class Solution{
    public boolean isNonDecreasingOrWhat(int[] arr, int n){
        ArrayList<Integer> odd = new ArrayList<>();
        ArrayList<Integer> even = new ArrayList<>();
        for(int i:arr){
            if(i%2==0) even.add(i);
            else odd.add(i);
        }
        Collections.sort(odd);
        Collections.sort(even);
        int i=0, j=0;
        int prevMaxi = Integer.MIN_VALUE;
        for(int num:arr){
            int curr = -1;
            if(num%2==0){
                curr = even.get(j);
                j++;
            }
            else{
                curr = odd.get(i);
                i++;
            }
            if(prevMaxi > curr) return false;
            prevMaxi = Math.max(prevMaxi, curr);
        }
        return true;
    }
}