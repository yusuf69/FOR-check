import java.lang.*;
import java.util.*;
public class ATM
{
  public static void main(String [] args)
  {
    Scanner s=new Scanner(System.in);
    System.out.println("Enter pinnumber");
    int pinno=s.nextInt();
   
   if(pinno>1111 && pinno<9999)
      {
         System.out.println("Access is granted");
          System.out.println("Enter amount to be pulled");
          int amount=s.nextInt();
         if(amount%100==0)
             {
                System.out.println("Entered amount is ="+amount);
              }
         else
             {
               System.out.println("Enterd amount is invalid");
             }
       }
   else
      { 
       System.out.println("Enterd pinnumber is invalid");
      }
}
}
