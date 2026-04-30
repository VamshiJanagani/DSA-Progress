import java.util.*;
import java.lang.*;
import java.io.*;

public final class Main
{
    public static void main(String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        Solution sol = new Solution();
        String s = sc.nextLine();
        String[] arr = new String[5];
        for (int i = 0; i < 5; i++) {
            arr[i] = sc.next();
        }
        boolean ans = sol.canBeDrawn(arr, s);
        if (ans == true) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}

class Solution {
    public boolean canBeDrawn(String[] arr, String s) {
        char rank = s.charAt(0);
        char suit = s.charAt(1);
        for (String cards: arr) {
            if (cards.charAt(0) == rank || cards.charAt(1) == suit) {
                return true;
            }
        }
        return false;
    }
}