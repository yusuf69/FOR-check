import java.lang.*;
import java.util.*;
public class Pinnumber
{
  public static void main(String [] args)
   {
     Scanner s=new Scanner(System.in);
     System.out.println("Enter your try");
     int n=s.nextInt();
    int i=1;
    while(i<n)
      {
      System.out.println("Enter pinnumber");
    int pin=s.nextInt();
       if(i<=3)
         {
         if(pin==1245)
            {
              System.out.println("Access granted");
              break;
            }
         else
            {
              System.out.println("Entered pinnumber is invalid");
            }
         }
       else
         {
            System.out.println("Transaction is blocked temporarily");
           break;
         }
      i++;
   }
 }
}
