package arrays;
import java.util.*;
public class Array9
{
 public static void main(String [] args)
  {
    Scanner s=new Scanner(System.in);
    System.out.println("Enter order of matrix");
     int n=s.nextInt();
    Integer a[][]=new Integer[n][n];
    System.out.println("Enter Matrix Element");
    for(int i=0;i<a.length;i++)
     {
    for(int j=0;j<a[i].length;j++)
      {
        a[i][j]=s.nextInt();
      }
    }
  System.out.println("Print Matrix Element");
    for(int i=0;i<a.length;i++)
     {
    for(int j=0;j<a[i].length;j++)
      {
        System.out.print(a[i][j]+" ");
      }
    System.out.println();
    }
 }
}
