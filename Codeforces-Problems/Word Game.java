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
            sc.nextLine();
            ArrayList<ArrayList<String>>arr = new ArrayList<>();
            for(int i=0;i<3;i++){
                ArrayList<String> temp = new ArrayList<>(Arrays.asList(sc.nextLine().split(" ")));
                arr.add(temp);
            }
            ArrayList<Integer>ans = sol.getPoints(arr, n);
            for(int points : ans){
                System.out.print(points+" ");
            }
            System.out.println();
        }
	}
}

class Solution{
    public ArrayList<Integer> getPoints(ArrayList<ArrayList<String>> arr, int n){
        HashMap<String, Integer> mp = new HashMap<>();
        for(int i=0;i<3;i++){
            for(String s:arr.get(i)){
                mp.put(s, mp.getOrDefault(s, 0)+1);                
            }
        }
        ArrayList<Integer>ans = new ArrayList<>();
        for(int i=0;i<3;i++){
            int sum = 0;
            for(String s:arr.get(i)){
                int freq = mp.get(s);
                if(freq==1) sum+=3;
                else if(freq==2) sum+=1;
            }
            ans.add(sum);
        }
        return ans;
    }
}