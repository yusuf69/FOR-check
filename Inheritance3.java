/*This program is dedicated to use of super keyword  */
import java.lang.*;
import java.util.*;
class Superclass
{
   void n()
    {
      System.out.println("This is Superclass");
   }
}
class Subclass extends Superclass
{
   void n()
    {
     super.n();
     System.out.println("This is Subclass");
     }
}
public class Inheritance3
{
 public static void main(String [] args)
   {
     Subclass obj=new Subclass();
     obj.n();
   }
}
