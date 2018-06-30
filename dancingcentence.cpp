import java.util.Arrays;
import java.util.Scanner;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
import java.util.*;
import java.lang.*;

/**
 *
 * @author dawood abbaspour
 * 
 */
public class uniqsubarray {
static String removeDuplicates(String s) {
    StringBuilder noDupes = new StringBuilder();
    for (int i = 0; i < s.length(); i++) {
        String si = s.substring(i, i + 1);
        if (noDupes.indexOf(si) == -1) {
            noDupes.append(si);
        }
    }
    return noDupes.toString();
}
    public static void main(String... args) throws Exception{
    Scanner in=new Scanner(System.in);
    
    String s="";
   
        s=in.next();
     
      for(int i=0;i<=9;i++)
      {
      int count = s.length() - s.replace(""+i, "").length();
    System.out.println(i+" "+count);
      }
    
}
}

	









