/*this is known method overridding and also known as method hidding*/
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
     System.out.println("This is Subclass");
     }
}
public class Inheritance1
{
 public static void main(String [] args)
   {
     Subclass obj=new Subclass();
     obj.n();
   }
}
