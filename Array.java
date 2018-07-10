import java.lang.*;
import java.util.*;
class Array
{
  public static void main(String [] args)
  {
     Scanner s=new Scanner(System.in);
     try{
          System.out.println("Enter the no of element");
          int n=Integer.parseInt(s.nextLine());
          Integer i[]=new Integer[n];
         System.out.println("Enter array element");
         for(int j=0;j<i.length;j++)
           {
               i[j]=s.nextInt();
          }
          System.out.println("..Dis array element..");
        for(int k : i)
          {
             System.out.println(k+" ");
          }
       }
    catch(Exception c)
       {
          System.out.println("only integer value");
     }
     finally
         {
            s.close();
          }
       }
    }
