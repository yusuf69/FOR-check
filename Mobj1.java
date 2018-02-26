import java.lang.*;
import java.util.*;
class Mobj1
{
 public static void main(String [] args)
  {
    Scanner s=new Scanner(System.in);
    int i=1;
   while(i>0)
      {
        if(i<=3)
        {
         System.out.println("Enter your pin");
        int pin=s.nextInt();
        if(pin==1245)
           {
              System.out.println("Access Granted");
              System.out.println("Enter your amount to be pulled");
              float amount=s.nextFloat();
             if(amount%100==0)
                {
                    System.out.println("Valid amount");
                     System.out.println("Amount="+amount);
                     break;
                   }
               else
                {
                 System.out.println("Invalid amount");
                }
          
         }
         else
            {
               System.out.println("Invalid pin");
            }
         }
     else
        {
          System.out.println("System is temporarily off");
          break;
        }
      i++;
  }
}
}
