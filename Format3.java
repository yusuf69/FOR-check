import java.lang.*;
import java.util.*;
public class Format3
{
  public static void main(String [] args)
   {
     Scanner s=new Scanner(System.in);
     int i,j;
    for(i=5;i>0;i--)
       {
        for(j=1;j<=i;j++)
           {
             System.out.print(j +" ");
           }
         System.out.println("\n");
       }
  }
}
