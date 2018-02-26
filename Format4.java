import java.lang.*;
import java.util.*;
public class Format4
{
  public static void main(String [] args)
   {
     Scanner s=new Scanner(System.in);
     int i,j;
    for(i=1;i<=5;i++)
       {
        for(j=i;j>0;j--)
           {
             System.out.print(j +" ");
           }
         System.out.println("\n");
       }
  }
}
