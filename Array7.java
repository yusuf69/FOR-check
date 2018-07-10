package arrays;
import java.util.*;
class Display
{
  void dis(int x[])
   {
     System.out.println("...Dis array element..");
     for(int k : x)
      {
        System.out.println(k+" ");
      }
  }
}
public class Array7
{
public static void main(String [] args)
{
  Display d1=new Display();
  d1.dis(new Integer[] {1,2,3,4,5});
 }
}
