/*this is parameterized constructor with inheritance*/
import java.lang.*;
import java.util.*;
class Superclass
{
   Superclass(int y)
    {
      System.out.println("This is Superclass");
      System.out.println("y="+y);
     }
}
class Subclass extends Superclass
{
    Subclass(int x)
     {
       super(x);
     }
}
public class Inheritance5
{
  public static void main(String [] args)
   {
     Subclass obj=new Subclass(15);
    }
}
