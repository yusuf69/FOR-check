import java.lang.*;
import java.util.*;
class Superclass
{
   int a;
    void m1()
     {
       System.out.println("This is superclass");
        System.out.println("this is a="+this.a);
      }
     {
        System.out.println("this is non-static block in main class");
     }
}
class Subclass extends Superclass
{
    int b;
    void m2()
     {
       System.out.println("This is subclass");
       System.out.println("this is b="+this.b);
     }
     {
        System.out.println("this is non-static block in subclass");
    }
}
public class Inheritance
{
  public static void main(String [] args)
   {
      Subclass obj=new Subclass();
      obj.a=200;
      obj.b=300;
      obj.m1();
      obj.m2();
  }
}
     
