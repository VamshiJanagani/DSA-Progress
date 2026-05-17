import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        char[][] mat=new char[n][m];
        for(int i=0;i<n;i++){
            Arrays.fill(mat[i], '.');
        }
        Solution sol=new Solution();
        sol.PrintSnake(mat, n, m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.print(mat[i][j]);
            }
            System.out.println();
        }
	}
}
class Solution{
    public void PrintSnake(char[][] arr, int n, int m){
        
        for(int i=0;i<n;i+=2){
            for(int j=0;j<m;j++){
                arr[i][j]='#';
            }
        }
        boolean flag=true;
        for(int i=1;i<n;i+=2){
            if(flag==true){
                arr[i][m-1]='#';
            }
            else{
                arr[i][0]='#';
            }
            flag=!flag;
        }
    }
}
