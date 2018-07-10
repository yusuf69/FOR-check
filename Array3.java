package arrays;
import java.util.*;
public class Array3
{
public static void main(String [] args)
{
  Scanner s=new Scanner(System.in);
   try{
        System.out.println("Enter no of array element");
        int n=s.nextInt();
       Integer a[]=new  Integer[n];
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
     
    Arrays.sort(a);
   System.out.println("The sorted array is");
   for(int k : a)
    {
       System.out.print(k+" ");
   }
  System.out.println("Enter element to be searched");
  int t=s.nextInt();
 int x=  Arrays.binarySearch(a,t);
 if(x>=0)
    {
       System.out.println("Index of that element is="+x);
    }
  else
    {
        System.out.println("This is not the element");
     }
 }
   catch(Exception c)
      {
          System.out.println("Only Integer value");
     }
   finally
         {
            s.close();
          }
    }
}
      
        
      
