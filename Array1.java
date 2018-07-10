package arrays;
import java.util.*;
public class Array1
{
public static void main(String [] args)
{
  Scanner s=new Scanner(System.in);
   try{
        System.out.println("Enter no of array element");
        int n=Integer.parseInt(s.nextLine());
       Integer a[]=new Integer[n];
       System.out.println("..Enter arrays element..");
       for(int i=0;i<a.length;i++)
        {
            a[i]=s.nextInt();
         }
       System.out.println(".array element..");
       for(int k : a)
        {
            System.out.println(k+" ");
        }
     }
   catch(Exception c)
      {
          System.out.println("Only integer value");
     }
   finally
         {
            s.close();
          }
    }
}
      
        
      
