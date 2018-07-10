/*this is known as use of constructor*/
import java.lang.*;
import java.util.*;
class Superclass
{
   Superclass()
    {
      System.out.println("This is Superclass");
   }
}
class Subclass extends Superclass
{
   Subclass()
    {
     System.out.println("This is Subclass");
     }
}
public class Inheritance4
{
 public static void main(String [] args)
   {
     Subclass obj=new Subclass();
     
   }
}
