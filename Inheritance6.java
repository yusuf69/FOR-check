/*this is parameterized constructor with inheritance and static */
import java.lang.*;
import java.util.*;
class Superclass
{  
   static int a;
   
   static void m1()
    {
      System.out.println("This is Superclass");
      System.out.println("y="+a);
     }
     static
       {
           System.out.println("This is superclass");
      }
}
class Subclass extends Superclass
{
   static int b;
    static void m2()
     {
       System.out.println("This is Subclass");
       System.out.println("The value b="+b);
     }
    static
      {
          System.out.println("This is Subclass");
     }
}
public class Inheritance6
{
  public static void main(String [] args)
   {
     Subclass.a=12;
      Subclass.b=85;
      Subclass.m1();
      Subclass.m2();     
    }
}
