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
        sc.nextLine();
        String s = sc.nextLine();
        int count=0, removals = 0;
        for(char c:s.toCharArray()){
            if(c=='x') count++;
            else{
                if(count >=3){
                    removals +=(count-2);
                }
                count =0;
            }
        }
        if(count >=3){
            removals +=(count-2);
        }
        System.out.println(removals);
	}
}
