import java.lang.*;
import java.util.*;
class IFcase
{
  public static void main(String [] args)
   {
    Scanner s=new Scanner(System.in);
    System.out.println("Enter a number:");
    int n=s.nextInt();
   if(n%2==0)
    {
     System.out.println("Entered number is even="+n);
     }
  else
   {
    System.out.println("Entered number is odd="+n);
  }
}
}
