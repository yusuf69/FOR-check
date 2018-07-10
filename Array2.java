package arrays;
import java.util.*;
public class Array2
{
public static void main(String [] args)
{
  Scanner s=new Scanner(System.in);
   try{
        System.out.println("Enter no of array element");
        int n=s.nextInt();
       Float a[]=new Float[n];
       System.out.println("..Enter arrays element..");
       for(int i=0;i<a.length;i++)
        {
            a[i]=s.nextFloat();
         }
       System.out.println(".array element..");
       for(float k : a)
        {
            System.out.println(k+" ");
        }
     }
   catch(Exception c)
      {
          System.out.println("Only float  value");
     }
   finally
         {
            s.close();
          }
    }
}
      
        
      
