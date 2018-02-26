import java.lang.*;
import java.util.*;
class Subclass
{
   int a,b,c;
    void add()
     {
       c=a+b;
      System.out.println("The sum is="+c);
     }
}
class Mainclass
{
public static void main(String [] args)
{
    Subclass obj=new Subclass();
   obj.a=45;
   obj.b=85;
   obj.add();
 }
}

