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
        int x = sc.nextInt();
        sc.nextLine();
        ArrayList<Pair<Character, Integer>> arr = new ArrayList<>();
        for(int i=0;i<n;i++){
            char op = sc.next().charAt(0);
            int val = sc.nextInt();
            arr.add(new Pair<>(op, val));
        }
        Solution sol = new Solution();
        long[] ans = sol.getAnswerPair(arr, n, x);
        System.out.println(ans[0] + " "+ ans[1]);
	}
}

class Pair<T, U>{
    T first;
    U second;
    Pair(T first, U second){
        this.first = first;
        this.second = second;
    }
}
class Solution{
    public long[] getAnswerPair(ArrayList<Pair<Character,Integer>>arr,int n, int x){
        int count = 0;
        long sum = x;
        for(int i=0;i<n;i++){
            char op = arr.get(i).first;
            int data = arr.get(i).second;
            if(op=='+') sum+=data;
            else if(sum < data) count++;
            else{
                sum-=data;
            }
        }
        long[] ans = new long[2];
        ans[0] = sum;
        ans[1] = count;
        return ans;
    }
}