import java.lang.*;
import java.util.*;
class Increament
{
  static int a=10;
   static void inc()
   {
      a++;
     System.out.println("The increamented number is="+a);
   }
}
class Mobj
{
 public static void main(String [] args)
  {
     Increament.inc();
       Increament.inc();
  }
}
