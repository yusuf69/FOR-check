package arrays;
import java.util.*;
public class  Array8
{
  public static void main(String [] args)
  {
    Scanner s=new Scanner(System.in);
    int a1[]={1};
    int a2[]={1,2};
   int a3[]={1,2,3};
   int a4[]={1,2,3,4};
  int a5[]={1,2,3,4,5};
  int b[][]={a1,a2,a3,a4,a5};
 System.out.println("...This is jogged array...");
 for(int i=0;i<b.length;i++)
   {
   for(int j=0;j<b[i].length;j++)
     {
      System.out.print(b[i][j]+" ");
   }
   System.out.println();
 }
}
}
