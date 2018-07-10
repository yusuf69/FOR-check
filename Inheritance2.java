/*this is known method overloading*/
import java.lang.*;
import java.util.*;
class Superclass
{ 
   
   void n(int a)
    {
      System.out.println("This is Superclass");
      System.out.println("This is number="+a);
   }
}
class Subclass extends Superclass
{  
   
   void n(String b)
    {
     System.out.println("This is Subclass");
     System.out.println("this is String="+b);
     }
}
public class Inheritance2
{
 public static void main(String [] args)
   {
     Subclass obj=new Subclass();
     obj.n(452);
     obj.n("this is YOUSUF ANSARI");
   }
}
