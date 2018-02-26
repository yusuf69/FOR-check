import java.lang.*;
import java.util.Scanner;
public class Add1
{
   public static void main(String [] args)
    {
      Scanner s=new Scanner(System.in);
      System.out.println("Enter first number:");
      int a=s.nextInt();
      System.out.println("Enter Second number:");
      int b=s.nextInt();
      float c=(float)(a+b)/2;
     System.out.println("Sum of two number="+c);
   }
}
