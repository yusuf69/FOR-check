import java.lang.*;
import java.util.*;
public class CheckPrime
{
   public static void main(String [] args)
   {
     Scanner s=new Scanner(System.in);
     System.out.println("Enter a number ");
     int n=s.nextInt();
     int i;
    for(i=2; i<n;i++)
       {
          if(n%i==0)
               {
                 System.out.println("Entered number is not prime="+n);
                 break;
                }
           
        }
      if(n==i)
        {
            System.out.println("Entered number is prime ="+n);
        }
   }
}

