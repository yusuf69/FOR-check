/*this is parameterized constructor with inheritance*/
import java.lang.*;
import java.util.*;
class Superclass
{
   static void m1(int y)
    {
      System.out.println("This is Superclass");
      System.out.println("y="+y);
     }
}
class Subclass extends Superclass
{
    static void m2(float x)
     {
       System.out.println("This is subclass");
       System.out.println("X="+x);
     }
}
public class Inheritance7
{
  public static void main(String [] args)
   {
     Subclass.m1(452);
     Subclass.m2(12.52f);
    }
}
